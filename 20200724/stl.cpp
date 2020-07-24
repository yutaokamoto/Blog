#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    int ipt;
    for(int i = 0; i < 10; i++){
        cin >> ipt;
        pq.push(ipt);
    }
    for(int i = 0; i < pq.size(); i++){
        cout << pq.top() << "   ";
        pq.pop();
    }
    //priority_queue<int, vector<int>, greater<int>> pq_s = {3,2,5,1,7};
    return 0;
}