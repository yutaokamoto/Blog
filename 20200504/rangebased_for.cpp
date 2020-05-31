#include <bits/stdc++.h>
using namespace std;
// onedayの20200503を参照のこと．

int main(){
    vector<int> v {0,1,2}; //初期化の方法だが，=をつけても良い．
    for(auto i: v){
        if(i==1){
            i*=10;
        }
        cout << i << endl;
    }/*コピーなのでvの実際の要素は変更されない．
       コピーなので無駄にメモリを圧迫しないように注意(文字列のvectorとか？)．*/

    cout << endl;

    for(auto& i: v){ //{0,1,2}とかだとエラー．
        if(i==1){
            i*=10;
        }
        cout << i << endl;
    }/*ほぼ万能型．
       lvalueであればconst，非const関わらず受け取れる．*/

    cout << endl;

    for(const auto& i: {0,1,2}){ //constのrvalueを渡している例
        cout << i << endl;
    }/*要素の変更はできない．
       constであればlvalueでもrvalueでも受け取れる．*/

    cout << endl;

    for(auto&& i: v){ //constのrvalueを渡した場合，要素の変更はできない．
        if(i==2){
            i*=10;
        }
        cout << i << endl;
    }/*万能型．
       const，非const，lvalue，rvalue何も気にせず使える．*/

    return 0;
}