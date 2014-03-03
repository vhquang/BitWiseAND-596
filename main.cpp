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
#include <algorithm>
#include <assert.h>
#include "QuangBitwiseAnd.h"
#include "HaiBitwiseAnd.h"

using namespace std;

typedef void (*exec_func) (vector<long long> subset, int N, vector<long long> *output);

bool compareVector (vector<long long> va, vector<long long> vb);
double test(
        void (*func) (vector<long long> subset, int N, vector<long long> *output),
        int &correct,
        int &total
);


QuangBitwiseAnd* quang;
void QuangWrapper(vector<long long> subset, int N, vector<long long> *output) {
    quang->run(subset, N, output);
}

HaiBitwiseAnd* hai;
void HaiWrapper(vector<long long> subset, int N, vector<long long> *output) {
    hai->run(subset, N, output);
}

void test1000(
        string name,
        void (*func) (vector<long long> subset, int N, vector<long long> *output)
) {
    int correct = 0, total = 0;
    double totalTime = 0.0;
    for (int i = 0; i < 1; ++i) {
        totalTime += test(func, correct, total);
    }
    printf("Code %s:\n", name.c_str());
    printf("Test: %d/%d \t Total runtime: %fs\n\n", correct, total, totalTime / CLOCKS_PER_SEC);
}


/*------------------------------MAIN--------------------------------------*/

int main() {
    test1000("Quang", &QuangWrapper);
    test1000("anh Hai", &HaiWrapper);
    return 0;
}


/*------------------------------TEST--------------------------------------*/

bool compareVector (vector<long long> va, vector<long long> vb) {
    if (vb.size() != va.size()) return false;
    int k = int(va.size());
    for (int i = 0; i < k; ++i)
        if (va[i] != vb[i])
            return false;
    return true;
}


double test(
        void (*func) (vector<long long> subset, int N, vector<long long> *output),
        int &correct,
        int &total
) {

    vector<long long> input, result;
    int N;
    vector<long long> out;
    clock_t startTime, endTime;
    double executeTime = 0.0;
    double totalTime = 0.0;
    int wrong = 0;
    correct = 0, total = 0;

//---------------------------------------------//
    input = {11LL, 17LL, 20LL};
    N = 4;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {99LL, 157LL};
    N = 4;
    result = {99LL, 157LL, 262LL, 296LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1152921504606846975LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 5;
    result = {15LL, 113LL, 402LL, 676LL, 840LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1LL, 3LL, 5LL, 7LL, 9LL, 11LL};
    N = 6;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {14LL, 20LL};
    N = 3;
    result = {14LL, 18LL, 20LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {256LL, 257LL, 512LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {256LL, 257LL, 258LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {255LL, 512LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {255LL, 257LL, 258LL};
    N = 3;
    result = {255LL, 257LL, 258LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {37605186966386267LL, 59589953432976151LL, 114526199215272749LL, 246902755620990961LL, 440607922709290635LL, 888247940910830469LL, 908525822732318500LL, 929353498596269467LL, 956241416692559604LL, 1005505323179543622LL};
    N = 10;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {85222010406493600LL, 98533189169819721LL, 117433433199650553LL, 249228708628186531LL, 254056376670927363LL, 263578143335803064LL, 274817621185843036LL, 396232097877679568LL, 454988876326893243LL, 518427838205811287LL, 637565663673819888LL, 680914036131360661LL, 720259478633012385LL, 767883137394209305LL, 798043506761702732LL, 853229332912217306LL, 883820293212526701LL, 917166810424936229LL, 1010917532636534133LL, 1109819413054064197LL};
    N = 20;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {4634895148912413LL, 19275726242289341LL, 36443533585690600LL, 139107461730575528LL, 245502065593713119LL, 299804247994282861LL, 311714371538114286LL, 321015572605246854LL, 398606283463105169LL, 435066408059568797LL, 458046715939506328LL, 460671554863694537LL, 464091096360595111LL, 480572417203299823LL, 527507136978518519LL, 564788462460552251LL, 600998351507207749LL, 721365704242929146LL, 842366212059457052LL, 860417185619634450LL, 900656753300291238LL, 923348614942651522LL, 970390662015840418LL, 980151430562793337LL, 1017572316769099745LL, 1017902317992574881LL, 1043899247467741203LL, 1052925021069781705LL, 1121403766690128753LL, 1137867004291015241LL};
    N = 30;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {21669437050455753LL, 25722357315907677LL, 49818866329341093LL, 85830681056568908LL, 158945027390702360LL, 174017278657612124LL, 295693370557549860LL, 302544319836041171LL, 334823594957382593LL, 361862817226021989LL, 367758761890922225LL, 388599031687930413LL, 446382502943453257LL, 460962431787375743LL, 482640163953288255LL, 523806540204901691LL, 556430476379012196LL, 577260070494008702LL, 580202980354481979LL, 650873460712445825LL, 671327939838059843LL, 679643059193320266LL, 683985002278612274LL, 707712496167180557LL, 710854143390450945LL, 719742881024436434LL, 739135459892364344LL, 866852232229493133LL, 872492260397406810LL, 878128319661416903LL, 897952493062927705LL, 898716626355703958LL, 927353751946187297LL, 978785971580078516LL, 980821534766640428LL, 1042547778937236878LL, 1055791092469523904LL, 1077818959112542317LL, 1140316057000051920LL, 1146593069137907532LL};
    N = 40;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {22997016356998169LL, 38890300175674205LL, 78170905546914710LL, 134877717750534323LL, 135212790426985636LL, 141292619848142198LL, 199720973433380292LL, 211579767812285936LL, 212630264557234744LL, 234206017306038950LL, 236436123951952104LL, 261198122962424898LL, 261704332792268845LL, 280298862417196844LL, 285543686739449030LL, 311399283733684053LL, 347279510749542237LL, 381280567325784860LL, 423407977025113837LL, 438957060936673609LL, 456147560812613773LL, 463320863242215394LL, 470171140080383384LL, 530699971440379806LL, 534913028533492707LL, 558888949104633480LL, 559992275236500082LL, 578834314689741928LL, 583750465353879737LL, 593249084923971083LL, 596530794807017776LL, 616815712538030135LL, 685320712669358481LL, 690878826862577134LL, 718081094758820327LL, 773939047771546902LL, 778559833298103815LL, 801793937428356470LL, 806994903985013990LL, 807760467250729482LL, 901787951526700801LL, 928428860408840356LL, 936948048169387773LL, 991213386976241952LL, 1004202345815793131LL, 1010260135471259686LL, 1023981139822817754LL, 1083733543755790189LL, 1107848456779470658LL, 1110019609780636481LL};
    N = 50;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {98066721578452412LL, 104530952473100442LL, 193335522522736483LL, 500194387120081014LL, 533680612254231747LL, 798510311595540589LL, 943453034602042056LL, 1034561807523540264LL, 1071245662748545278LL, 1137598845620915885LL};
    N = 10;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {34243759561351899LL, 217594249125308923LL, 318803646024889904LL, 353915157204039630LL, 581871796339470665LL, 604470956624323323LL, 698854841465120956LL, 724352702379222070LL, 964203580878016759LL, 1063213631494267717LL};
    N = 10;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {25218797374921523LL, 49531097237008762LL, 89051901260961379LL, 221305969219129035LL, 509989797766196476LL, 595656960883812835LL, 728433500187039385LL, 744593410983891582LL, 819972841895512533LL, 865413306969100605LL};
    N = 10;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {49190554088198905LL, 75060481195192645LL, 126693188348327171LL, 257713859001944528LL, 334092139720529678LL, 497153598920644622LL, 518441854896848943LL, 825566819208864141LL, 1127826138960095635LL, 1129401638699624763LL};
    N = 10;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {284231985730993603LL, 360278441064874736LL, 632834822446821771LL, 666034913333755391LL, 673673490080403317LL, 750125751537390682LL, 931708670643187414LL, 995330094079454147LL, 1021037569605542019LL, 1054148460671308071LL};
    N = 10;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 10;
    result = {511LL, 130561LL, 16646658LL, 1057096708LL, 33303037960LL, 516503900176LL, 3884866084896LL, 13817046122560LL, 23236045734016LL, 28879905423616LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {200971765698330914LL};
    N = 9;
    result = {735LL, 64545LL, 27919620LL, 771950600LL, 26877890576LL, 104223219776LL, 180535443584LL, 224160416256LL, 200971765698330914LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {584316409994732494LL, 612128876569675137LL};
    N = 8;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {160858059823529796LL, 300476448388202058LL, 676143508460460082LL};
    N = 7;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {339897172327116301LL, 573083823360494537LL, 827083308452028617LL, 1003393796083559084LL};
    N = 6;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {32652100686442959LL, 144981187600372529LL, 1068890312607365973LL, 1096020179730985688LL};
    N = 6;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {72430107541277379LL, 369860934720605032LL, 681186103077273895LL, 1149611707493569796LL};
    N = 6;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {251726149884149716LL, 420764088777659156LL, 460931295335115245LL, 718159558737210222LL, 720738658730184509LL};
    N = 6;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {143914961617697316LL, 474532536279695974LL, 756795449329026531LL, 921169772975608183LL, 1122598993246850014LL};
    N = 6;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {376978446429184569LL, 377525153004420932LL, 475868974240239290LL, 999801884886720981LL, 1040812831957860718LL, 1135023885653163486LL};
    N = 6;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {240486539381267013LL, 496849822409828071LL, 1040392865455159093LL};
    N = 7;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {46128270291088715LL, 578459223360841341LL, 1114493891495045063LL};
    N = 7;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {149829159834733922LL, 370304495285730305LL, 478775158340938904LL, 723380346641507538LL};
    N = 7;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {119321962170860186LL, 693200094521887836LL, 761600245534073272LL, 862430420856733545LL};
    N = 7;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {368096692531749620LL, 828333532258466198LL, 900124005642678142LL, 941952787677414349LL, 1079158070149580112LL};
    N = 7;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 3;
    result = {3LL, 5LL, 6LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 4;
    result = {7LL, 25LL, 42LL, 52LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 5;
    result = {15LL, 113LL, 402LL, 676LL, 840LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 6;
    result = {31LL, 481LL, 3618LL, 12868LL, 21640LL, 26896LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 7;
    result = {63LL, 1985LL, 30786LL, 231556LL, 823560LL, 1384976LL, 1721376LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 8;
    result = {127LL, 8065LL, 254082LL, 3940612LL, 29639176LL, 105415696LL, 177276960LL, 220336192LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 9;
    result = {255LL, 32513LL, 2064642LL, 65044996LL, 1008796680LL, 7587629072LL, 26986418208LL, 45382901824LL, 56406065280LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 10;
    result = {511LL, 130561LL, 16646658LL, 1057096708LL, 33303037960LL, 516503900176LL, 3884866084896LL, 13817046122560LL, 23236045734016LL, 28879905423616LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 11;
    result = {1023LL, 523265LL, 133694466LL, 17046177796LL, 1082467029000LL, 34102310871056LL, 528899993780256LL, 3978102870933568LL, 14148655229501568LL, 23793710831632640LL, 29573023153783296LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 12;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 13;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 14;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 50;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {497456886053185347LL, 687836324742968196LL, 961519143248518204LL};
    N = 3;
    result = {497456886053185347LL, 687836324742968196LL, 961519143248518204LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {25445465428336464LL, 119126939205340292LL, 738594909639430826LL, 874138279465476183LL};
    N = 4;
    result = {25445465428336464LL, 119126939205340292LL, 738594909639430826LL, 874138279465476183LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {20267040477030537LL, 45345123349041458LL, 366600517167588608LL, 792704184658052262LL, 913564426789001792LL};
    N = 5;
    result = {20267040477030537LL, 45345123349041458LL, 366600517167588608LL, 792704184658052262LL, 913564426789001792LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {564049655924807LL, 82626105441289881LL, 189267338552811808LL, 295425636701306948LL, 306264808675766408LL, 759492409343672864LL};
    N = 6;
    result = {564049655924807LL, 82626105441289881LL, 189267338552811808LL, 295425636701306948LL, 306264808675766408LL, 759492409343672864LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {3483287249617280LL, 9177630133846082LL, 72693163312021505LL, 144256483920710660LL, 311030141860014354LL, 639797240348849673LL, 798264477464203384LL};
    N = 7;
    result = {3483287249617280LL, 9177630133846082LL, 72693163312021505LL, 144256483920710660LL, 311030141860014354LL, 639797240348849673LL, 798264477464203384LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1197441448148994LL, 9320294078485056LL, 18632328943651856LL, 108086700329182214LL, 144220744430125220LL, 296817598472982808LL, 598984935195312801LL, 729583156990576648LL};
    N = 8;
    result = {1197441448148994LL, 9320294078485056LL, 18632328943651856LL, 108086700329182214LL, 144220744430125220LL, 296817598472982808LL, 598984935195312801LL, 729583156990576648LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {70368888898088LL, 563160449646659LL, 72075340843974948LL, 91207007215818768LL, 146691073237344262LL, 157706263119003713LL, 289074837068975496LL, 325551168124097040LL, 619385686675628032LL};
    N = 9;
    result = {70368888898088LL, 563160449646659LL, 72075340843974948LL, 91207007215818768LL, 146691073237344262LL, 157706263119003713LL, 289074837068975496LL, 325551168124097040LL, 619385686675628032LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {4732367042249856LL, 11857144202660544LL, 19151946369792066LL, 45038195859456288LL, 56437661405020164LL, 144503332877111304LL, 217303219658884101LL, 288235068169413136LL, 653593697450983480LL, 864990376140865536LL};
    N = 10;
    result = {4732367042249856LL, 11857144202660544LL, 19151946369792066LL, 45038195859456288LL, 56437661405020164LL, 144503332877111304LL, 217303219658884101LL, 288235068169413136LL, 653593697450983480LL, 864990376140865536LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {9105412982794LL, 282235211384320LL, 5629499635138804LL, 19140309038399489LL, 27059118599766312LL, 72203846398643328LL, 146380731784982593LL, 217122762878615554LL, 324487884479401988LL, 586048854743335440LL, 619246085856067840LL};
    N = 11;
    result = {9105412982794LL, 282235211384320LL, 5629499635138804LL, 19140309038399489LL, 27059118599766312LL, 72203846398643328LL, 146380731784982593LL, 217122762878615554LL, 324487884479401988LL, 586048854743335440LL, 619246085856067840LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {61744727720576LL, 1829604664295434LL, 4514389122097234LL, 9235966428480544LL, 22517998203965444LL, 45036011725783104LL, 72057630029257737LL, 74664544697401856LL, 144117546013032757LL, 289396411521401088LL, 740846536783308928LL, 901564625296949248LL};
    N = 12;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {76666817951866072LL, 144133077719515411LL, 435313868489670662LL, 603680305313743489LL};
    N = 8;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {63976503554105600LL, 163555709029206688LL, 367236973134251161LL, 585477508532707962LL};
    N = 8;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {434956906357148288LL, 470873128237797890LL, 576764320630408277LL, 680751227667488824LL};
    N = 8;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {72439064802724LL, 93458498864970244LL, 518617661904456026LL, 589035284906115073LL};
    N = 8;
    result = {2203322417699LL, 72439064802724LL, 299067183743112LL, 36046393600640016LL, 36312473434882112LL, 93458498864970244LL, 518617661904456026LL, 589035284906115073LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {224890129090148LL, 45053820592997120LL, 79098323467772121LL, 1113905774192767110LL};
    N = 8;
    result = {100643LL, 50355208LL, 224890129090148LL, 562949971148816LL, 562950537543680LL, 45053820592997120LL, 79098323467772121LL, 1113905774192767110LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {144646802521494672LL, 155753948169644049LL, 315265176137892197LL, 691869939523592706LL};
    N = 8;
    result = {542862LL, 68786849320LL, 1125917153906752LL, 1126106065961216LL, 144646802521494672LL, 155753948169644049LL, 315265176137892197LL, 691869939523592706LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {37313759967470464LL, 261913840489631888LL, 296789256171987562LL, 579101788404649216LL};
    N = 8;
    result = {67126295LL, 85900400649LL, 4416568623140LL, 5600704593984LL, 37313759967470464LL, 261913840489631888LL, 296789256171987562LL, 579101788404649216LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {10223673653109904LL, 432532507016040512LL, 590637327237777672LL, 687081758191601837LL};
    N = 8;
    result = {131923LL, 672142342LL, 1258299936LL, 10469163008LL, 10223673653109904LL, 432532507016040512LL, 590637327237777672LL, 687081758191601837LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {10250404437862402LL, 466144899826713409LL, 649398142626518480LL, 864906102341730816LL};
    N = 8;
    result = {2097215LL, 17523804292LL, 1374934803464LL, 145136138981408LL, 10250404437862402LL, 466144899826713409LL, 649398142626518480LL, 864906102341730816LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {40884275943408384LL, 180185225376569440LL, 290519698949360129LL, 432503963477213620LL, 603482468486758474LL};
    N = 10;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1273234922143806LL, 3236963319687296LL, 73236322582677248LL, 175713316168073218LL, 328764431528101928LL};
    N = 10;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {5071145203163206LL, 10282908904390728LL, 326827637443395846LL, 450379754437496960LL, 585750648486758400LL};
    N = 10;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {2379421131272LL, 54082815595167945LL, 81418853921523076LL, 452189561096768512LL, 1085565508188899350LL};
    N = 10;
    result = {19927843LL, 828933021808LL, 2379421131272LL, 9968921628672LL, 2833716487421952LL, 7890783256444928LL, 54082815595167945LL, 81418853921523076LL, 452189561096768512LL, 1085565508188899350LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {29915513979715620LL, 146367284310704203LL, 198493264368804864LL, 288230558092231760LL, 360289930878212130LL};
    N = 10;
    result = {4205461LL, 147334567170184LL, 5631699246448896LL, 29915513979715620LL, 146367284310704203LL, 198493264368804864LL, 288230558092231760LL, 360289930878212130LL, 577599919634776576LL, 581193205005942784LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {7041435673317392LL, 73344059982757952LL, 209779122002526784LL, 434184016399336594LL, 595080434262474765LL};
    N = 10;
    result = {539427LL, 370475172LL, 14500758792LL, 1427170691072LL, 88927365111808LL, 7041435673317392LL, 73344059982757952LL, 209779122002526784LL, 434184016399336594LL, 595080434262474765LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {2357358433042964LL, 175713228408487944LL, 288248690198970732LL, 478366738489038866LL, 618964643167076610LL};
    N = 10;
    result = {69217953LL, 68737667137LL, 5789616652416LL, 1136912878535680LL, 2357358433042964LL, 175713228408487944LL, 288248690198970732LL, 478366738489038866LL, 594523531506622464LL, 618964643167076610LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {19215900607514881LL, 238726102133215238LL, 288653036369744928LL, 360307782882173016LL, 576609736348321924LL};
    N = 10;
    result = {302252715LL, 8865349453584LL, 2849936825385024LL, 14073826314821632LL, 19215900607514881LL, 155454457130254336LL, 238726102133215238LL, 288653036369744928LL, 360307782882173016LL, 576609736348321924LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {18067179601659396LL, 180152815558732060LL, 306527644463155202LL, 721748165895733344LL, 872010401267581360LL};
    N = 10;
    result = {299723LL, 4467572417537LL, 211657351630848LL, 9640658210422784LL, 11425025326579712LL, 18067179601659396LL, 180152815558732060LL, 306527644463155202LL, 721748165895733344LL, 872010401267581360LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {19140436598211152LL, 36602751821676546LL, 45458228067195072LL, 289356830395992589LL, 577113106573426816LL};
    N = 11;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1146820709337216LL, 2424148303840256LL, 9078197279785112LL, 146789201648812097LL, 900722502993445636LL};
    N = 11;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {292489689318800LL, 19703287161028738LL, 153122662620628996LL, 576632277225964105LL, 873698980633052160LL};
    N = 11;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1825965621770LL, 1129267297682437LL, 9578963632916544LL, 153403877357527172LL, 400820436650557968LL};
    N = 11;
    result = {33624563LL, 1825965621770LL, 22265379171368LL, 246290886738176LL, 1129267297682437LL, 9578963632916544LL, 24805277198979072LL, 153403877357527172LL, 400820436650557968LL, 614827153992777728LL, 668661536834715648LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {4842318198776082LL, 9088619893489920LL, 149199362088637448LL, 387310599819886594LL, 633318697637281888LL};
    N = 11;
    result = {1207962301LL, 137977226305LL, 309332561924LL, 2400785795186816LL, 4842318198776082LL, 9088619893489920LL, 109257379547447808LL, 149199362088637448LL, 387310599819886594LL, 633318697637281888LL, 1010424797715236864LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1197390225739840LL, 4592041665382432LL, 9748907903942658LL, 27021598108785665LL, 509190432968950848LL};
    N = 11;
    result = {17039807LL, 10907460100LL, 13779869958664LL, 1197390225739840LL, 4592041665382432LL, 9748907903942658LL, 27021598108785665LL, 38597432275640336LL, 509190432968950848LL, 650916656482091136LL, 776334382636990720LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {2266103669608576LL, 2304748441157889LL, 31526303437981760LL, 294422825776185484LL, 324540682512632352LL};
    N = 11;
    result = {144503LL, 361356067594LL, 73118648172560LL, 2266103669608576LL, 2304748441157889LL, 31526303437981760LL, 72198907522712576LL, 145107155870031872LL, 253424515235840000LL, 294422825776185484LL, 324540682512632352LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {3155171334LL, 44637876192256LL, 41799184369582626LL, 578864285259301144LL, 802844698904821764LL};
    N = 11;
    result = {290025LL, 3155171334LL, 1100646191633LL, 22325243150656LL, 44637876192256LL, 915017096528000LL, 31807497170329600LL, 41799184369582626LL, 128968319112855552LL, 578864285259301144LL, 802844698904821764LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {286702241317889LL, 10133119608817952LL, 94575678142350602LL, 594635683816563200LL, 729589814147682820LL};
    N = 11;
    result = {172279LL, 1271863990296LL, 114350049001536LL, 286702241317889LL, 2823856308879488LL, 10133119608817952LL, 36645221529845760LL, 94575678142350602LL, 188518965163720704LL, 594635683816563200LL, 729589814147682820LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {638002896584912LL, 1848279618859020LL, 18436757008744994LL, 39690192223242304LL, 144115275335213440LL, 193760886985327104LL, 306291229128148224LL, 360292953430294532LL, 587729784684281889LL};
    N = 11;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {698091831714LL, 44289786718720LL, 9020397960855872LL, 25051282188820548LL, 90230476840730649LL, 145242204689405968LL, 288530273887457282LL, 613795771317240832LL, 802274122163028484LL};
    N = 11;
    result = {698091831714LL, 44289786718720LL, 2254067628901409LL, 9020397960855872LL, 25051282188820548LL, 90230476840730649LL, 145242204689405968LL, 288530273887457282LL, 328836474705281160LL, 613795771317240832LL, 802274122163028484LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {140877611691650LL, 301274776379680LL, 27062005420523553LL, 36743519372640260LL, 73275854137857024LL, 108121644153848400LL, 432345873786081680LL, 585469063996639304LL, 868069395129204742LL};
    N = 11;
    result = {19468713993LL, 140877611691650LL, 301274776379680LL, 20628144076095488LL, 27062005420523553LL, 36743519372640260LL, 73275854137857024LL, 108121644153848400LL, 432345873786081680LL, 585469063996639304LL, 868069395129204742LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {575800750654550LL, 152066867199867829LL, 423809571484631297LL, 579328558474863690LL};
    N = 6;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {13563870831051657LL, 363687270392349778LL, 613303222428212296LL, 774915057879392820LL};
    N = 6;
    result = {68719478791LL, 68719497376LL, 13563870831051657LL, 363687270392349778LL, 613303222428212296LL, 774915057879392820LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {31991978349731384LL, 40092742334087446LL, 659937960901796037LL, 865540235008676128LL};
    N = 6;
    result = {1099545182219LL, 1374389600832LL, 31991978349731384LL, 40092742334087446LL, 659937960901796037LL, 865540235008676128LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {67176123198903296LL, 109213549410341732LL, 293020857567683594LL, 743184099155640481LL};
    N = 7;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {82286370604876081LL, 451239650165792896LL, 610380381348714564LL, 833496614795251488LL};
    N = 7;
    result = {655LL, 74834LL, 8623689736LL, 82286370604876081LL, 451239650165792896LL, 610380381348714564LL, 833496614795251488LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {75242184850278556LL, 266880248343823681LL, 306961180334353802LL, 645176525717848576LL};
    N = 7;
    result = {4647LL, 33824880LL, 105025536LL, 75242184850278556LL, 266880248343823681LL, 306961180334353802LL, 645176525717848576LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {54857605896855873LL, 726076955498267296LL};
    N = 9;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {15112893442212373LL, 510398112243335712LL};
    N = 9;
    result = {1515LL, 9517062LL, 579821111320LL, 2816953089560640LL, 15112893442212373LL, 54045403175460992LL, 510398112243335712LL, 595038118083559680LL, 614741899990795264LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {257446113820058673LL, 814907463668084798LL};
    N = 9;
    result = {19395LL, 70452292LL, 45365690504LL, 13263127843072LL, 88031802950144LL, 9029198104496128LL, 9086398686576640LL, 257446113820058673LL, 814907463668084798LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {324509218661075031LL, 676410906565284360LL, 700525315056329108LL};
    N = 9;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {145297035352936706LL, 381682320461719822LL, 650959271349327061LL};
    N = 9;
    result = {13697577LL, 1174690334768LL, 914795855356480LL, 13581309361275008LL, 40814215224656896LL, 45600595503742976LL, 145297035352936706LL, 381682320461719822LL, 650959271349327061LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {184739265259767296LL, 315357529633334579LL, 649362799570227284LL};
    N = 9;
    result = {84621LL, 40269512778LL, 5154497630368LL, 149878252538112LL, 1136349562560512LL, 1273268825948160LL, 184739265259767296LL, 315357529633334579LL, 649362799570227284LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {110874210594758428LL, 436880640119988769LL, 712890354608703850LL};
    N = 3;
    result = {110874210594758428LL, 436880640119988769LL, 712890354608703850LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {9007242813687393LL, 298365134244937813LL, 739162670125549614LL};
    N = 3;
    result = {9007242813687393LL, 298365134244937813LL, 739162670125549614LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {2251799813980160LL, 18031990700081416LL, 38298189022887944LL};
    N = 3;
    result = {2251799813980160LL, 18031990700081416LL, 38298189022887944LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {38571623859790160LL, 515262141368719765LL, 751098123388919304LL};
    N = 4;
    result = {73LL, 38571623859790160LL, 515262141368719765LL, 751098123388919304LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {76702104061805578LL, 110347022409711937LL, 1047093510439986216LL};
    N = 4;
    result = {35LL, 76702104061805578LL, 110347022409711937LL, 1047093510439986216LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {2199023255592LL, 563224831463436LL, 9288674231455780LL};
    N = 4;
    result = {2199023255592LL, 283674000097280LL, 563224831463436LL, 9288674231455780LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {8787503087616LL};
    N = 11;
    result = {8589935103LL, 17179999745LL, 34376385026LL, 69776573444LL, 8787503087616LL, 26533251254280LL, 528041567064080LL, 3976386017501216LL, 14145221522636864LL, 23795630920990848LL, 29576863332499712LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 11;
    result = {1023LL, 523265LL, 133694466LL, 17046177796LL, 1082467029000LL, 34102310871056LL, 528899993780256LL, 3978102870933568LL, 14148655229501568LL, 23793710831632640LL, 29573023153783296LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1099511627775LL};
    N = 3;
    result = {1099511627775LL, 1099511627777LL, 1099511627778LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {3LL, 12LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 10;
    result = {511LL, 130561LL, 16646658LL, 1057096708LL, 33303037960LL, 516503900176LL, 3884866084896LL, 13817046122560LL, 23236045734016LL, 28879905423616LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1LL, 2LL, 4LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {3LL, 576460752303423489LL};
    N = 3;
    result = {3LL, 576460752303423489LL, 576460752303423490LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {7LL, 56LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {3LL, 6LL};
    N = 4;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {144115188075855875LL, 288230376151711745LL};
    N = 3;
    result = {144115188075855875LL, 288230376151711745LL, 288230376151711746LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {14LL};
    N = 4;
    result = {14LL, 19LL, 37LL, 56LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1LL, 3LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {7LL, 56LL, 448LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1LL, 3LL, 5LL};
    N = 4;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1LL, 2LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {15LL, 240LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {2LL, 4LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1LL, 2LL, 3LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {11LL, 17LL, 20LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {8796164327424LL, 576460752303423743LL, 1152903912420802560LL};
    N = 5;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {558446353793941504LL};
    N = 5;
    result = {18014398509481991LL, 36028797018963993LL, 72057594037927978LL, 144115188075855924LL, 558446353793941504LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {};
    N = 5;
    result = {15LL, 113LL, 402LL, 676LL, 840LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {262LL, 296LL};
    N = 4;
    result = {11LL, 37LL, 262LL, 296LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {144115188075855871LL, 576460752303423484LL};
    N = 4;
    result = {144115188075855871LL, 576460752303423484LL, 720575940379279361LL, 864691128455135234LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {1LL, 2LL, 5LL};
    N = 3;
    result = {};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//

//---------------------------------------------//
    input = {13LL, 56LL};
    N = 4;
    result = {13LL, 19LL, 38LL, 56LL};
    startTime = clock();
    func(input, N, &out);
    endTime = clock();
    executeTime = double(endTime - startTime);
    totalTime += executeTime;
    ++total;
    if (compareVector(out, result)) ++correct;
    else ++wrong;
//---------------------------------------------//


//    printf("Test: %d/%d \t Total runtime:%f\n\n", correct, total, totalTime/ CLOCKS_PER_SEC);
    return totalTime;
}