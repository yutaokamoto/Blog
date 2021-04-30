#include <bits/stdc++.h>
using namespace std;

template<typename T>
T square(T x){
	return x*x;
}

int main(){
	int a = 10;
	double b = 2.0;

	cout << square<int>(a) << endl;
	cout << square<double>(b) << endl;
	return 0;
}
