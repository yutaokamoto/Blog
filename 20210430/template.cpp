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

// 定数のテンプレート
// テンプレート引数には、型名の他に整数型の定数も指定できる (参考 : https://qiita.com/amowwee/items/dd9d75d56af2562dcbbd)
template <int INDEX1, int INDEX2>
void tuple_swap(tuple<int, int, int> &t){
	swap(get<INDEX1>(t), get<INDEX2>(t));
}

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

	// 定数のテンプレート
	tuple<int, int, int> t = make_tuple(0,1,2);
	tuple_swap<0, 1>(t);
	cout << "(" << get<0>(t) << "," << get<1>(t) << "," << get<2>(t) << ")" << endl;
	tuple_swap<0, 1>(t);
	tuple_swap<0, 2>(t);
	cout << "(" << get<0>(t) << "," << get<1>(t) << "," << get<2>(t) << ")" << endl;

	return 0;
}
