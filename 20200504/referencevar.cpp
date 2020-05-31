#include <bits/stdc++.h>
using namespace std;
// onedayの20200503を参照のこと．

int main(){
    int j=10;
    int& jr=j; //型名に&をつけて宣言する．宣言と同時に代入されなければならない．ポインタとの違いは有効でない参照(NULL)を代入できないこと．
    jr+=10;
    cout << jr << endl;
    return 0;
}