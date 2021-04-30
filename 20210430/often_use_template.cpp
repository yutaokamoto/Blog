#include <bits/stdc++.h>
using namespace std;

template <typename T>
bool chmax(T &a, const T &b){
	if(a<b){
		a = b;
		return true;
	}
	return false;
}

int main(){
	int ans_max = 0;
	chmax<int>(ans_max, 4);
	cout << ans_max << endl;
	return 0;
}
