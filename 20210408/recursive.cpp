#include <bits/stdc++.h>
using namespace std;

#define all(I) I.begin(), I.end()

void print_all_permutaion(vector<int> v, vector<int> V);

int main(){
	vector<int> v = {1,0,2};
	sort(all(v));
	do{
		for(int i : v){cout << i << " ";}
		cout << endl;
	}while(next_permutation(all(v)));

	cout << "自作の方" << endl;
	print_all_permutaion(v, {});

	return 0;
}

// できた---!!!!!!!
void print_all_permutaion(vector<int> v, vector<int> V){
	if(v.size()==0){for(int i : V){cout << i << " ";}cout << endl;}
	else{
		for(int i : v){
			vector<int> v_ = {};
			for(int j : v){if(j!=i){v_.push_back(j);}}
			V.push_back(i);
			print_all_permutaion(v_, V);
			V.pop_back();
		}
	}
}