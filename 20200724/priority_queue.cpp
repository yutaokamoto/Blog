#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;

    //値の追加．
    int ipt;
    for(int i = 0; i < 5; i++){
        cin >> ipt;
        pq.push(ipt);
    }

    //値を大きい順に表示．(普通に表示するだけ．)
    while(!pq.empty()){
        cout << pq.top() << "   ";
        pq.pop();
    }
    cout << endl;

    //値を小さい順に表示．(少し工夫．)
    priority_queue<int, vector<int>, greater<int>> pq_s;
    pq_s.push(1);
    pq_s.push(4);
    pq_s.push(20);
    pq_s.push(5);
    pq_s.push(6);

    while(!pq_s.empty()){
        cout << pq_s.top() << endl;
        pq_s.pop();
    }
    return 0;
}