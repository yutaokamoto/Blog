#include <bits/stdc++.h>
using namespace std;

vector<int> cal_vec(vector<int> a, vector<int> b, string ope){
	vector<int> c(a.size());
	if(ope=="+"){
		for(int i=0; i<a.size(); i++){
			c.at(i) = a.at(i)+b.at(i);
		}
	}
	else if(ope=="-"){
		for(int i=0; i<a.size(); i++){
			c.at(i) = a.at(i)+b.at(i);
		}
	}
	return c;
}

int main(){
	vector<int> ans = cal_vec({1,2,3}, {10,20,30}, "+");
	for(int i : ans){cout << i << endl;}
	/*
	char flag_operator = ' ';
	cin >> flag_operator;
	if(flag_operator){cout << flag_operator << endl;}
	*/
	/*
	// 命令の個数
	int N;
	cin >> N;
	// 命令
	vector<vector<string>> orders(N);
	for(int i=0; i<N; i++){
		string word;
		while(cin>>word){
			orders.at(i).push_back(word);
			if(word==";"){break;}
		}
		cout << i << "行目の命令の入力終了" << endl;
		//cin >> orders.at(i);
	}
	for(auto order : orders){
		for(auto w : order){
			cout << w << "  ";
		}
		cout << endl;
	}
	*/
	return 0;
}
