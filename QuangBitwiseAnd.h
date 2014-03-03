#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <sstream>
#include <iostream>
#include <cmath>
#include <assert.h>

using namespace std;

typedef long long ll;

class QuangBitwiseAnd {
public:
    void run(const vector<long long>& subset, int N, vector<long long>* output) {
        output->clear();
        ll grid [50][60] = {};
        ll map [60] = {};
        int sSize = subset.size();
        int extra = N - sSize;

        for (int i = 0; i < sSize; ++i) {
            ll num = subset[i];
            for (int j = 0; j < 60; ++j) {
                ll bit = (ll)pow(2, j);
                if ((num & bit) != 0) {
                    grid[i][j] = 1;
                    map[j]++;
                }
            }
        }

//        if (sSize > 0) {
            for (int i = 0; i < sSize; ++i) {
                int countUniqueOne = 0;
                int countConnect = 0;
                for (int j = 0; j < 60; ++j) {
                    if (grid[i][j] == 1 && map[j] == 1) ++countUniqueOne;
                    if (grid[i][j] == 1 && map[j] == 2) ++countConnect;
                }
                if (countUniqueOne < extra) return;
                if (countConnect < sSize - 1) return;
            }

            int countZero = 0;
            for (int i = 0; i < 60; ++i) {
                if (map[i] == 0) countZero++;
            }
            if (countZero < (extra * (extra-1) / 2)) return;

            for (int i = 0; i < 60; ++i)
                if (map[i] > 2) return;
//        }


        vector <long long> ret (subset);

        for (int i = sSize; i < N; ++i) {
            for (int j = 0; j < i; ++j) {
                for (int u = 0; u < 60; ++u) {
                    if (map[u] == 1 && grid[j][u] == 1) {
                        grid[i][u] = 1;
                        map[u]++;
                        break;
                    }
                }
            }

            int nBitZeroNeed = (N-1) - i;
            for (int z = 0; nBitZeroNeed > 0; ++z) {
                if (map[z] == 0) {
                    assert(grid[i][z] == 0);
                    grid[i][z] = 1;
                    map[z] = 1;
                    nBitZeroNeed--;
                }
//                if (z == 60) assert(false);
            }

            ll num = 0;
            for (int u = 0; u < 60; ++u) {
                if (grid[i][u] > 0) num |= (1LL << u);
            }
            ret.push_back(num);
        }

        sort(ret.begin(), ret.end());
        for (auto it = ret.begin(); it != ret.end(); ++it) {
            output->push_back(*it);
        }
    }
};