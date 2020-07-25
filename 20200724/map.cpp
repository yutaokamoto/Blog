#include <bits/stdc++.h>
using namespace std;

//mapと，unordered_map
//unordered_mapの方が各操作に対する計算量が小さい．
int main(){
    cout << "map" << endl;
    map<string, int> mp;

    //値の追加．
    mp["Sasaki"] = 0;
    mp["Hinano"] = 1;

    //値の表示．
    ////表示するのはkeyの大きさが小さい順(pairの比較の順)．
    for(pair<string, int> p : mp){ //pair<string, int> pを使わずにauto pとすると簡潔にかける．
        cout << p.first << " " << p.second << "\t";
    }
    ////mp["Sasaki"]のような風にアクセスすると，そのkeyがない場合value型の値(この場合0)が追加されてしまう．
    ////cout << "mpに登録されているvalueの表示．\t" << mp.at("Sasaki") << "\t" << mp.at("Hinano") << endl;
    cout << "存在していないkeyにアクセスする．\t" << mp["Okamoto"] << endl;
    cout << endl;

    //値の削除．
    mp.erase("Hinano");
    ////key not found.
    //cout << mp.at("Hinano") << endl;

    //所属判定
    cout << "mpにSasakiは存在している？\t" << mp.count("Sasaki") << "\t"
    << "mpにYutaは存在している？\t" << mp.count("Yuta") << endl;
    cout << endl;

    //要素数
    cout << "mpのサイズは，" << mp.size() << endl;
    cout << endl << endl;

    cout << "unordered_map" << endl;
    //どのような順番で値が取り出されるか分からない．
    //keyとして，pair・tupleは使えない．
    unordered_map<string, int> ump;
    ump["Okamoto"] = 0;
    ump["Yuta"] = 1;

    for(auto p : ump){
        cout << p.first << " " << p.second << "\t";
    }
    return 0;
}