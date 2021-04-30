#include <bits/stdc++.h>
using namespace std;

// テンプレート関数の定義
//// typename テンプレート引数
template<typename T>
T square(T x){
	return x*x;
}

// 構造体のテンプレート
//// メンバ変数をテンプレート化して定義した構造体・クラスをクラステンプレートという
template <typename T>
struct Point{
	T x;
	T y;
	void print(){
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main(){
	int a = 10;
	double b = 2.0;

	// テンプレート関数のコール
	//// テンプレート引数を渡さなければならない
	cout << square<int>(a) << endl;
	cout << square<double>(b) << endl;

	//// 引数の型からテンプレート引数を推定できる場合は、省略することもできる
	cout << square(a) << endl;
	cout << square(b) << endl;
	return 0;
}
