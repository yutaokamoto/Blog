#include <bits/stdc++.h>
using namespace std;

// aよりもbが大きいならば、aをbで更新し、trueを返す
template <typename T>
bool chmax(T &a, const T &b){
	if(a<b){
		a = b;
		return true;
	}
	return false;
}

// aよりもbが小さいならば、aをbで更新し、trueを返す
template <typename T>
bool chmin(T &a, const T &b){
	if(a>b){
		a = b;
		return true;
	}
	return false;
}

// 適当な関数
int f(int x){
	return x*x-10;
}

int main(){
	int ans_max = 0;
	int ans_min = 10000000;
	// 関数f()のある区間における最大値、最小値を求めるのに便利
	for(int i=0; i<10; i++){
		chmax(ans_max, f(i));
		chmin(ans_min, f(i));
	}
	cout << ans_max << endl;
	cout << ans_min << endl;
	
	return 0;
}
