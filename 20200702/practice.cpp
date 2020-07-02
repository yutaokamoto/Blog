//Seminar > Discrete_Optimization > graph_coloring.cppの練習
////ベクトルの初期化
////ラムダ式の書き方
#include <bits/stdc++.h>
using namespace std;

const vector<int> Color = {0,1,2,3,4,5,6,7};

int main(){
    vector<int> Domain = Color;
    vector<int> Colored(7, -1);
    Colored[2] = 2; //[]の中がノードの名前，=の右側が色の名前
    Colored[4] = 2;
    int node = 0;
    vector<pair<int, int>> edges = {make_pair(0,1), make_pair(0,2), make_pair(4,0)};

    cout << "before\n";
    for(auto i : Domain){
        cout << i << " ";
    }
    cout << endl;

    for(auto&& edge : edges){
        //cout << edge.first << " " << edge.second << endl;

        if(node == edge.first && Colored[edge.second] != -1){
            Domain.erase(remove(Domain.begin(), Domain.end(), Colored[edge.second]), Domain.end());
        }
        else if(node == edge.second && Colored[edge.first] != -1){
            Domain.erase(remove(Domain.begin(), Domain.end(), Colored[edge.first]), Domain.end());
        }

        //auto flag0 = [=](){return (node==edge.first)*edge.second;};
        //cout << flag0() << endl;*/

        //auto flag1 = [=](){return (node==edge.first)*Colored[edge.second];};
        //cout << flag1() << endl;

        //auto flag2 = [=](){return ( (node==edge.first)*Colored[edge.second]*(Colored[edge.second]!=-1) + (node==edge.second)*Colored[edge.first]*(Colored[edge.first]!=-1) );};
        //cout << flag2() << endl;

        //cout << endl;
    }

    /*cout << "after\n";
    for(auto i : Domain){
        cout << i << " ";
    }

    vector<int> vec1{0,1,2}; //ベクトルの初期化の仕方：vec = {0,1,2}でも良い．
    vector<int> vec2(3, 1);
    for(int i = 0; i < vec1.size(); i++){
        cout << "vec1 " << vec1[i] << endl;
        cout << "vec2 " << vec2[i] << endl;
    }

    vector<vector<int>> vec3(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << vec3[i][j] << " ";
        }
        cout << endl;
    }*/

    vector<int> V = {0,1,2,3,4,5,6,7};
    vector<pair<int,int>> E = {make_pair(0,1), make_pair(0,2), make_pair(0,3), make_pair(1,3), make_pair(3,4), make_pair(5,6)};
    vector<int> Colored1(V.size(), -1);

    for(int c : Colored1){
        cout << c << " ";
    }

    return 0;
}