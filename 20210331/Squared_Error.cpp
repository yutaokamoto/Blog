#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> A(N);
	for(int i=0; i<N; i++){
		cin >> A.at(i);
	}
	/*int ans = 0;
	for(int i=0; i<N; i++){
		for(int j=0; j<i; j++){
			ans += pow(A.at(i)-A.at(j), 2);
		}
	}
	cout << "工夫してない方の答えは、" << ans << endl;*/

	long long sum = 0;
	long long sub_sum = accumulate(A.begin(), A.end(), 0);
	for(int i=0; i<N; i++){
		sub_sum -= A.at(i);
		sum += (N-1)*pow(A.at(i), 2) - 2*A.at(i)*sub_sum;
	}
	//cout << "工夫した方の答えは、" << sum << endl;
	cout << sum << endl;

	return 0;
}
