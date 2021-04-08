#include <bits/stdc++.h>
using namespace std;

int main(){

	// main関数の中で関数を定義できる
	// auto 関数名(引数){処理}
	auto my_min = [](int a, int b){
		if(a<b){return a;}
		else{return b;}
	};
	cout << my_min(100, 10) << endl;

	// [&]とすると、外部の変数を利用できる
	int o = 100;
	auto my_max = [&](int a){
		if(a<o){return o;}
		else{return a;}
	};
	cout << my_max(1e+3) << endl;

	// 大きい順にソート
	auto comp = [&](int a, int b){return a > b;};
	vector<int> v = {0,3,4,2,1};
	sort(v.begin(), v.end(), comp);
	cout << "配列を大きい順に並べると、";
	for(int i=0; i<v.size(); i++){cout << v.at(i) << " ";}
	return 0;
}
