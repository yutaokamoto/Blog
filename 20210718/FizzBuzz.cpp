#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
	for(int i=1; i<=100; i++){
		if(i%15==0){cout << "FizzBuzz" << endl;}
		else if(i%3==0){cout << "Fizz" << endl;}
		else if(i%5==0){cout << "Buzz" << endl;}
		else{cout << i << endl;}
	}
	return 0;
}
