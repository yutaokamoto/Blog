#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> stk;

    //値の追加．
    stk.push(1);
    stk.push(4);
    stk.push(7);

    //サイズの表示．
    cout << "stkのサイズは，" << stk.size() << endl;

    //値の表示．
    while(!stk.empty()){
        cout << stk.top() << "\t";
        stk.pop();
    }
    cout << endl << endl;
    return 0;
}