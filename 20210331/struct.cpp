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
    human_with_constructor(){
        cout << "1st constructor is called." << endl;
        name = "NIGO";
        height = 167;
        weight = 55;
    }
    //// コンストラクタ2 (コンストラクタはいくつも定義することができ、与える引数の型や数の違いによって呼び分けられる)
    human_with_constructor(string name_, int height_, int weight_){
        cout << "2nd constructor is called." << endl;
        // メンバ変数へ直接アクセスできる
        name = name_;
        height = height_;
        weight = weight_;
    }
    //// コンストラクタ3 (コンストラクタはいくつも定義することができ、与える引数の型や数の違いによって呼び分けられる)
    human_with_constructor(int height_, int weight_){
        cout << "3rd constructor  is called." << endl;
        height = height_;
        weight = weight_;
    }
    //// コピーコンストラクタ
    //// ただ単に「他のオブジェクトのメンバ変数をコピーして新しいオブジェクトを作る」がしたい場合、
    //// コピーコンストラクタを書かなくても、自動的に上記の動作を行うコピーコンストラクタが作られる
    human_with_constructor(const human_with_constructor &old){
        cout << "Copy constructor is called" << endl;
        name = old.name;
        height = old.height/1.05;
        weight = old.weight/1;
    }
};

struct human_with_operatoroverload{
    // メンバ変数
    string name;
    int height;
    int weight;
    // 演算子オーバーロード
    // 返り値 関数名(引数){}のように書く
    human_with_operatoroverload operator+(const human_with_operatoroverload &other){
        cout << "+ operator is called!" << endl;
        human_with_operatoroverload me;
        me.name = name + other.name;
        me.height = height + other.height;
        me.weight = weight + other.weight;
        return me;
    }
    void operator=(const human_with_operatoroverload &other){
        cout << "= operator is called!" << endl;
        name = other.name;
        height = other.height;
        weight = other.weight;
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
    human_with_constructor NIGO;
    cout << NIGO.name << " " << NIGO.height << " " << NIGO.weight << endl;
    // コンストラクタを定義している時だけ、変数名(初期化値1, 初期化値2, ...)と書ける
    human_with_constructor okamoto("Okamoto", 173, 80);
    cout << okamoto.name << " " << okamoto.height << " " << okamoto.weight << endl;

    human_with_constructor aikawa(180, 75);
    cout << aikawa.name << " " << aikawa.height << " " << aikawa.weight << endl;

    //// 以下のように初期化することもできる
    human_with_constructor game = {"TheGame", 180, 80};
    cout << game.name << " " << game.height << " " << game.weight << endl;

    //// コピーコンストラクタを用いて、オブジェクトを初期化する場合
    //// コピーコンストラクタを構造体内で定義していなくても、同じ構造体の型を持つ異なるオブジェクトを渡すことで初期化することができる
    //// その場合、ただ単に値がコピーされる ← コピーコンストラクタが定義されている部分をコメントアウトして確認!
    human_with_constructor fiftycent(game);
    cout << fiftycent.name << " " << fiftycent.height << endl;

    // 演算子オーバーロードを行うことによって、他のオブジェクトで新しいオブジェクトの初期化ができる
    human_with_operatoroverload a = {"A", 1, 1};
    human_with_operatoroverload b = {"B", 2, 2};
    human_with_operatoroverload a_plus_b;
    a_plus_b = a + b; // 変数を定義した後にメンバ変数の値を決定
    cout << a_plus_b.name << " " << a_plus_b.height << " " << a_plus_b.weight << endl;

    human_with_operatoroverload c = {"C", 3, 3};
    human_with_operatoroverload a_plus_b_plus_c = a + b + c; // 初期化(変数の定義とともにメンバ変数の値を決定)
    cout << a_plus_b_plus_c.name << " " << a_plus_b_plus_c.height << " " << a_plus_b_plus_c.weight << endl;

    return 0;
}