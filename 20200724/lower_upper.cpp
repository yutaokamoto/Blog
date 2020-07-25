#include <bits/stdc++.h>
using namespace std;

//昇順にソートされた配列についてx以上(以下)の要素のうち最も小さい(大きい)ものを表示できる．
int main(){
    vector<int> v{2,0,4,5,9,0};

    //ソート
    sort(v.begin(), v.end(), [](int a, int b){return a<b;});

    //表示
    for_each(v.begin(), v.end(), [](int i){cout << i << " ";});
    cout << endl;

    //x以下の要素のうち最も大きいものを表示．
    cout << "4以下の要素のうち最も大きいものは，" << *lower_bound(v.begin(), v.end(), 4) << endl;;

    //x以上の要素のうち最も小さいものを表示．
    cout << "4以上の要素のうち最も小さいものは，" << *upper_bound(v.begin(), v.end(), 4) << endl;;
    return 0;
}