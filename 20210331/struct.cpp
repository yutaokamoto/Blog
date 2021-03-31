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
    human_with_constructor(string name_init, int height_init, int weight_init){
        cout << "Constructor is called." << endl;
        // メンバ変数へ直接アクセスできる
        name = name_init;
        height = height_init;
        weight = weight_init;
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
    return 0;
}