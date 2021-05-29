#include <bits/stdc++.h>
using namespace std;

//ビットの0，1を使うことで数え上げ問題で計算量を少なくできる．
int main(){
    int a = 3;

    //aを8桁の2進数で表す．
    cout << "aを8桁の2進数で表すと " << bitset<8>(a) << endl;

    //aを8桁の2進数で表したときの0ビット目．
    cout << "aを8桁の2進数で表したときの0ビット目は " << bitset<8>(a)[0] << endl;
    //cout << endl;

    //aを2進数で表した時に，0でないビットを数える．
    //[]でのアクセスは範囲外エラーとならないことがある．それを防ぐためにbitset<8>(a).test(i)とした方が良い
    int count = 0;
    for(int i = 0; i < 8; i++){
        if(bitset<8>(a)[i]==1){
            count++;
        }
    }
    cout << "aを2進数で表した時に，0でないビットは " << count << endl;

    //a>>nとn<<aは違った出力になる!!　←　当たり前だろ
    //cout << (i<<a) << endl; //0,8,16,24,32,...
    int n = 0;
    cout << n << "ビット目は " << ((a>>n)&1) << endl;
    return 0;
}