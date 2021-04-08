#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 10;
	// 条件の判定よりも前に1度だけ処理を実行
	do{
		cout << n << endl;
	}while(n<10);

	// next_permutation関数を使うことで順列の全列挙を簡単に行える
	// ただし、計算量は配列の長さをNとしてO(N!)
	cout << "配列の順列を全列挙する" << endl;
	vector<int> v = {0,2,1};
	sort(v.begin(), v.end(), [](int a, int b){return a<b;});
	do{
		for(int i : v){cout << i << " ";}
		cout << endl;
	}while(next_permutation(v.begin(), v.end()));

	return 0;
}
