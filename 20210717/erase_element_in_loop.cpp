#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
	set<int> s = {0, 1, 2};
	int target = 0;
	// 集合の中から特定の要素を削除する
	for(auto it=s.begin(); it!=s.end();){
		// イテレータの指す要素が削除する対象の場合
		if(*it==target){
			// 削除された要素の次のイテレータを返す
			it = s.erase(it);
			break;
		}
		else{
			it++;
		}
	}
	return 0;
}
