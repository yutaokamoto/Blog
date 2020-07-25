#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main(){
    //最初に追加したものを取り出す　＋　最後に追加したものを取り出す　ができる．
    deque<int> dq;

    //値を後ろに追加．
    dq.push_back(1);
    dq.push_back(7);

    //値を前に追加．
    dq.push_front(2);
    dq.push_front(8);

    //先頭の要素を表示．空のdequeに対して行うと未定義動作
    //-> #define _GLIBCXX_DEBUGをファイルの最初につけることで実行時エラーとして扱ってくれる．
    cout << "先頭の要素は，" << dq.front() << endl;
    //先頭の要素を削除．
    ////dq.pop_front();

    //最後尾の要素を表示．からのdequeに対して行うと未定義動作．
    //-> #define _GLIBCXX_DEBUGをファイルの最初につけることで実行時エラーとして扱ってくれる．
    cout << "最後の要素は，" << dq.back() << endl;
    //最後尾の要素を削除．
    ////dq.pop_back();

    //要素にアクセス．
    cout << "dqの1番目の要素は，" << dq.at(1) << endl;

    //サイズの表示．
    cout << "dqのサイズは，" << dq.size() << endl;

    //空かどうか判定．
    cout << "空？\t" << dq.empty() << endl;
    return 0;
}