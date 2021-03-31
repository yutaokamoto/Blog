#include <bits/stdc++.h>
using namespace std;

struct human{
    string name;
    int height;
    int weight;
};

struct human_with_constructor{
    // メンバ変数
    string name;
    int height;
    int weight;
    // メンバ関数
    //// コンストラクタ1
    human_with_constructor(string name_, int height_, int weight_){
        cout << "1st constructor is called." << endl;
        // メンバ変数へ直接アクセスできる
        name = name_;
        height = height_;
        weight = weight_;
    }
    //// コンストラクタ2 (コンストラクタはいくつも定義することができ、与える引数の型や数の違いによって呼び分けられる)
    human_with_constructor(int height_, int weight_){
        cout << "2nd constructor  is called." << endl;
        height = height_;
        weight = weight_;
    }
};

int main(){
    // 新しい型であるhumanの変数の生成と、初期化
    human yuta = {"Yuta", 173, 80};
    // 以下のように構造体の値を生成することもできる
    auto human_val = human();
    cout << human_val.name << endl; // →何も出力されない
    human_val.name = "Ryosuke";
    cout << human_val.name << endl; // →Ryosuke

    // 今度はコンストラクタ付きの構造体の変数を生成する
    human_with_constructor okamoto("Okamoto", 173, 80);
    cout << okamoto.name << endl;

    human_with_constructor aikawa(180, 75);
    cout << aikawa.height << endl;

    //// 以下のように初期化することもできる
    human_with_constructor game = {"TheGame", 180, 80};
    cout << game.name << endl;
    return 0;
}