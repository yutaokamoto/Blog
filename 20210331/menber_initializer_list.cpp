#include <bits/stdc++.h>
using namespace std;

// メンバ変数初期化子リストの使い所
//// 組み込み型の変数を構造体の中で使う時、既存の型のデフォルトコンストラクタ + 構造体内のコンストラクタによる値の代入　は非効率
//// 初期化子リストを使えば、構造体内のコンストラクタによる初期化　という1つの作業にすることができるため効率的

struct cell{
    string x;
    int y;
    // メンバ変数初期化子リスト
    cell() : x("1"), y(100){
    }
};

int main(){
    cell a;
    cout << a.x << " " << a.y << endl;

	return 0;
}