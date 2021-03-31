#include <bits/stdc++.h>
using namespace std;

struct human{
    string name;
    int height;
    int weight;
};

int main(){
    // 新しい型であるhumanの変数の生成と、初期化
    human yuta = {"Yuta", 173, 80};
    // 以下のように構造体の値を生成することもできる
    auto human_val = human();
    cout << human_val.name << endl; // →何も出力されない
    human_val.name = "Ryosuke";
    cout << human_val.name << endl; // →Ryosuke
    return 0;
}