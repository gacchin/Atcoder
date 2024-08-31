### 概要
vectorは動的サイズを確保できるシーケンスコンテナである。  
便利な点は以下の通り。  
- var.size()でインデックスの上限を渡せるためセグフォが起きない
- var.push_back(d)で1つづつ要素を追加できる
- algorithmでソートできる
### 初期化
1次元配列
``` cpp
vector<Type> v;
vector<Type> v();
vector<Type> v(n);      // nは要素数
vector<Type> v(n, d);   // dは初期値
```
2次元配列
``` cpp
vector<vector<Type>> vv;
vector<vector<Type>> vv();
vector<vector<Type>> vv(n);
vector<vector<Type>> vv(n, vector<Type>(m));    // n,mは要素数
vector<vector<Type>> vv(n, vector<Type>(m, d)); // dは初期値
```
### 解説

### 参考
- [Quita ](https://qiita.com/ysuzuki19/items/df872d91c9c89cc31aee)
- [Atcoder 多次元配列](https://atcoder.jp/contests/APG4b/tasks/APG4b_t)