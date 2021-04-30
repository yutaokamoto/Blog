#include <bits/stdc++.h>
using namespace std;

// テンプレート関数の定義
//// typename テンプレート引数
template<typename T>
T square(T x){
	return x*x;
}

// 構造体のテンプレート
//// メンバ変数の型をテンプレート化して定義した構造体・クラスをクラステンプレートという
//// テンプレート引数は、返り値の型や引数の型として用いることができる
template <typename T>
struct Point{
	T x;
	T y;
	void print(){
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main(){
	// テンプレート関数
	int a = 10;
	double b = 2.0;
	// テンプレート関数のコール
	//// テンプレート引数を渡さなければならない
	cout << square<int>(a) << endl;
	cout << square<double>(b) << endl;
	//// 引数の型からテンプレート引数を推定できる場合は、省略することもできる
	cout << "Ellipsed a template argument\t" << square(a) << endl;
	cout << "Ellipsed a template argument\t" << square(b) << endl;

	// 構造体のテンプレート
	//// int型のPoint構造体の宣言
	//// 関数テンプレートと異なり、テンプレート引数を省略することはできない
	Point<int> p1 = {0, 2};
	p1.print();

	return 0;
}
