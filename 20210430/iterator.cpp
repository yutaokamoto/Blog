#include <bits/stdc++.h>
using namespace std;

int main(){
	// 少しポインタの復習
	int a = 0;
	int* i_p = &a;
	(*i_p)++;
	cout << *i_p << endl;

	// イテレータは、ポインタの一般形
	vector<int> vec(3, 0);
	// for文の終了判定条件が「!=」であることに注意!
	for(auto i=vec.begin(); i!=vec.end(); i++){
		cout << *i << endl;
	}
	return 0;
}
