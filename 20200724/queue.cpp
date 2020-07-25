#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;

    //値の追加．
    q.push(3);
    q.push(6);
    q.push(5);
    q.push(8);

    //値の表示．
    while(!q.empty()){
        cout << "値\t" << q.front() << endl;
        q.pop();
        cout << "qのサイズは，" << q.size() << endl;
        cout << endl;
    }
    return 0;
}