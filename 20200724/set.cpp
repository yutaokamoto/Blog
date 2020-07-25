#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

//setと，unordered_set
//unordered_setの方が各操作に対する計算量が小さい．
int main(){
    cout << "set" << endl;
    set<int> st;

    //値の追加．
    st.insert(1);
    st.insert(8);
    st.insert(5);
    st.insert(0);
    st.insert(0);
    st.insert(1);
    st.insert(4);

    //値の表示．(小さい順．)
    cout << "stの要素を小さい順に表示．\t";
    for(auto m : st){
        cout << m << "\t";
    }
    cout << endl;
    cout << endl;

    //値が含まれているか判定．
    cout << "9は入ってる？\t" << st.count(9) << endl;
    cout << endl;

    //要素数を表示．
    cout << "stの要素数は，" << st.size() << endl << endl;

    //set型の要素のうち最小値を表示．(空のset型の変数に対し用いては型の変数に対し用いてはいけない．)
    //-> #define _GLIBCXX_DEBUGをファイルの最初につけることで実行時エラーとして扱ってくれる．
    cout << "stの最小値は，" << *begin(st) << endl << endl;

    //set型の要素のうち最小値を表示．(空のset型の変数に対し用いては型の変数に対し用いてはいけない．)
    //-> #define _GLIBCXX_DEBUGをファイルの最初につけることで実行時エラーとして扱ってくれる．
    cout << "stの最大値は，" << *rbegin(st) << endl << endl;

    cout << "unordered_set" << endl;
    unordered_set<int> ust;
    ust.insert(10);
    ust.insert(5);
    ust.insert(8);

    for(auto m : ust){
        cout << m << "\t";
    }
    cout << endl;
    return 0;
}