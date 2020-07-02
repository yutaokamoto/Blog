#include <bits/stdc++.h>
using namespace std;

int main(){
    tuple<int, int> t0 = {0,1};
    cout << get<0>(t0) << endl;
    cout << get<1>(t0) << endl;

    //なぜかこういうのはできない．
    /*for(int i = 0; i < 2; i++){
        cout << get<i>(t0) << endl;
    }*/

    tuple<int, int> t1(2, 1); //これでも初期化できる．
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;

    return 0;
}