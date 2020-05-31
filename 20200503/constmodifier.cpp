#include <bits/stdc++.h>
/*#include <iostream>
#include <vector>
#include <map>
#include <tuple>*/
using namespace std;

int main(){
    std::tuple<int, int, int> t;
    t = std::make_tuple(1, 2, 3);
    int& i = std::get<0>(t);
    cout << i << endl;

    int v=10;
    int u=5;
    const int* cp=&v;
    cout << cp <<endl;
    cp=&u;
    cout << cp <<endl;
    return 0;
}   