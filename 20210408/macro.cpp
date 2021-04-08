#include <bits/stdc++.h>
using namespace std;

// #define マクロ名 置き換えるプログラム
#define my_cout cout <<

// 引数をとることも出来る
// この場合iとnが引数
// 競プロで最もよく使われる
#define rep(i, n) for(int i=0; i<(int)n; i++)

// 競プロで2番目によく使われる
#define all(v) v.begin(), v.end()

int main(){

    my_cout "Hello" << endl;

    cout << "繰り返し処理スタート" << endl;
    rep(i, 10){
        cout << i << endl;
    }
    cout << "繰り返し処理ストップ" << endl;

    vector<int> vec(10, 1);
    cout << "配列の要素の和は、" << accumulate(all(vec), 0) << endl;
	return 0;
}