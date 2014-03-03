//
//  HaiBitwiseAnd.h
//  TopCoder
//
//  Created by Hai Vu on 2/27/14.
//  Copyright (c) 2014 Hai Vu. All rights reserved.
//

#ifndef TopCoder_HaiBitwiseAnd_h
#define TopCoder_HaiBitwiseAnd_h

#include <vector>
#include <iterator>
#include <iostream>
#include <cassert>

using namespace std;

class HaiBitwiseAnd {
public:


/*
 * We grow the set, each time adding only one number. Greedy algorithm.
 */
vector<long long> growSubset(vector<long long> subset, int N) {
    if (N < subset.size()) return (vector<long long>(0));
    
    /*
     * First, make sure the numbers in the subset are valid. If not, return empty.
     */
    for (int i=0; i< subset.size(); ++i)
        for (int j=i+1; j<subset.size(); ++j) {
        long long x = subset[i];
        long long y = subset[j];
        if ((x & y) == 0) return vector<long long>(0); // violation the rule
        for (int k=j+1; k < subset.size(); ++k) {
            if (x & y &subset[k]) return (vector<long long>(0)); // violation the rule
        }
    }
    if (N == subset.size()) return subset; // subset is good, just return
    
    /*
     * Each number in the set should have at least N - 1 bit set. Otherwise, we can't build the subset.
     */
    int bitsExtra = (int) N - 1 - subset.size();
    long long value = 0;
    vector<bool> matched (subset.size(), 0); // represents each number if the current subset
    for (int i=0; i<60; i++) {
        vector<int> validBitSet(0);
        for (int j=0;j<subset.size(); j++) {
            if (subset[j] & (1LL<<i)) validBitSet.push_back(j);
        }
        // This bit i-th should either match 0 or 1 number in the subset only. If more than that, it can't be used.
        if (validBitSet.size() == 0) {
            if (bitsExtra > 0) {
                bitsExtra -= 1;
                value += (1LL<<i);
            }
        } else if (validBitSet.size() == 1) { // if there is only one number that matches this bit, it's good.
            if (!matched[validBitSet[0]]) {
                matched[validBitSet[0]] = 1; // only take the minimum number in lexigraphical order
                value += (1LL<<i);
            }
        }
    }
    
    // put the number in the set and grow more
    subset.push_back(value); // we could prove that we will always find a number to grow the subset
    //sort(subset.begin(), subset.end());
    return (growSubset(subset, N));
}

void run(const vector<long long>& subset, int N, vector<long long>* output) {
    *output = growSubset(subset, N);
    sort(output->begin(), output->end());
}

void printSet(const vector<long long>& subset) {
    std::cout << "Result : { ";
    for (vector<long long>::const_iterator it = subset.begin(); it != subset.end(); ++it)
        std::cout << *it << " ";
    std::cout << "}" << endl;
}

void unitTest() {
    long long i1[] = {11,17,20};
    vector<long long> ret;
    run(vector<long long>(i1, i1 + sizeof(i1)/sizeof(i1[0])), 4, &ret);
    printSet(ret);
    assert(ret.size() == 0);
    long long i2[] = {99,157};
    ret.clear();
    run(vector<long long>(i2, i2 + sizeof(i2)/sizeof(i2[0])), 4, &ret);
    printSet(ret);
    assert(ret.size() == 4);
    long long i3[] = {1152921504606846975};
    ret.clear();
    run(vector<long long>(i3, i3 + sizeof(i3)/sizeof(i3[0])), 3, &ret);
    printSet(ret);
    assert(ret.size() == 0);
    long long i4[] = {};
    ret.clear();
    run(vector<long long>(i4, i4 + sizeof(i4)/sizeof(i4[0])), 5, &ret);
    printSet(ret);
    assert(ret.size() == 5);
    long long i5[] = {1, 3, 5, 7, 9, 11};
    ret.clear();
    run(vector<long long>(i5, i5 + sizeof(i5)/sizeof(i5[0])), 6, &ret);
    printSet(ret);
    assert(ret.size() == 0);
}
    
};

#endif
