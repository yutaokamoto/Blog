#include <bits/stdc++.h>
using namespace std;

//p.82
int main(){
    //文字列
    //https://bi.biopapyrus.jp/cpp/syntax/string.html　を参照．
    //文字列を扱うには，char型の配列
    char c[10] = "abcd";
    cout << "cは，" << c << endl;
    cout << "cの文字列の長さは" << strlen(c) << endl << endl;

    //文字列を扱うには，char型へのポインタ
    char* c_pointer = "efgh";
    cout << "c_pointerは，" << c_pointer << endl;
    cout << "c_pointerの文字列の長さは" << strlen(c_pointer) << endl << endl;

    //文字列を扱うには，string型
    string s = "ABCD";
    cout << "sは，" << s << endl;
    cout << "sの文字列の長さは" << s.size() << endl << endl;


    //ポインタ配列
    //http://cai3.cs.shinshu-u.ac.jp/sugsi/Lecture/c2/e_04-03.html　を参照．
    //ポインタ配列に静的に代入
    char* pointer_array[] = {"Okamoto", "Yuta"};
    cout << "pointer_arrayは，";
    for(char* letter : pointer_array){
        cout << letter << "    ";
    }
    cout << endl;
    pointer_array[0] = "okamoto"; //要素を書き換える．
    pointer_array[1] = "yuta";
    cout << "要素を書き換えた後のpointer_arrayは，";
    for(char* letter : pointer_array){
        cout << letter << "    ";
    }
    cout << endl << endl;

    //ポインタ配列に動的に代入
    char d[10];
    char* d_pointer_array[2];
    for(int i = 0; i < 2; i++){
        cin >> d;
        d_pointer_array[i] = (char*)malloc(sizeof(char)*(strlen(d)+1));
        strcpy(d_pointer_array[i], d);
    }
    cout << "d_pointer_arrayは，";
    for(char* letter : d_pointer_array){
        cout << letter << "    ";
    }
    cout << endl;

    free(d_pointer_array);
    return 0;
}