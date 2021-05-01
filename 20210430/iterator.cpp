#include <bits/stdc++.h>
using namespace std;

int main(){
	// 少しポインタの復習
	int a = 0;
	int* i_p = &a;
	(*i_p)++;
	cout << *i_p << endl;

	// イテレータは、ポインタの一般形
	//// コンテナの要素を指す
	//// イテレータ自体を移動したり、指す要素の参照・変更が行える
	vector<int> vec(3, 0);
	//// for文の終了判定条件が「!=」であることに注意!
	//// イテレータが指すコンテナの要素の中身を表示するときは、「*」をつける
	for(auto i=vec.begin(); i!=vec.end(); i++){
		cout << *i << endl;
	}
	return 0;
}
