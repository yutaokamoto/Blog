#include <bits/stdc++.h>
using namespace std;

// pair<string, int>に対して+演算子のオーバーロードを行う
pair<string, int> operator+(const pair<string, int> &other1, const pair<string, int> &other2){
    pair<string, int> me;
    me.first = other1.first + other2.first;
    me.second = other1.second + other2.second;
    return me;
}

int main(){
    pair<string, int> a = {"A", 1};
    pair<string, int> b = {"B", 2};
    pair<string, int> c;
    c = a + b;
    cout << c.first << " " << c.second << endl;
    
}