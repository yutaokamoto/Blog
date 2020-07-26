#include <bits/stdc++.h>
using namespace std;

struct mystrct{
    int x;
    string s;
    mystrct(){
        cout << "mystrct is called." << endl;
    }
};

int main(){
    mystrct m;
    m.x = 0;
    m.s = "hello";
    return 0;
}