#include <bits/stdc++.h>
using namespace std;

// goto ラベル　→　ラベル: 処理
// のように書く
int main(){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout << i+1 << "*" << j+1 << " ";
			if(i+1==5 && j+1==10){goto SKIP;}
		}
		cout << endl;
	}

	SKIP:
	cout << "終了" << endl;
	return 0;
}
