#include <bits/stdc++.h>
using namespace std;

int main(){
	// n以下の素数を全て求めるアルゴリズム(エラトステネスのふるい)
	int n;
	cin >> n;
	vector<int> data(n+1, 1);
	vector<int> result(n+1, 0);
	int m;
	int k = 0;

	data.at(0) = 0;
	data.at(1) = 0;
	for(int i=0; i<n+1; i++){
		if(data.at(i)==0){continue;}
		m = i;
		result.at(k) = m;
		while (m<=n+1)
		{
			data.at(m) = 0;
			m += i;
		}
		k++;
	}
	// 答えの出力
	cout << n << "以下の素数は、" << endl;
	for(int prime_number : result){
		if(prime_number==0){continue;}
		cout << prime_number << endl;
	}

	return 0;
}
