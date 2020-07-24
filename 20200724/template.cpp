#include <bits/stdc++.h>
using namespace std;

template<typename T, typename U> //T = UでもOK．
T add(T a, U b){
    return a+b;
}

int main(){
    cout << add(1, 2.0) << endl; //add(T a, T b){}だとエラー．
    return 0;
}