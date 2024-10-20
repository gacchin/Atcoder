# stringとchar型
## 概要
string,charは文字列操作可能な型である.  両者の違いを考察する
## string
C++で使用できる文字列クラスである。クラスであるため、文字列操作のメンバ関数が多く用意されており非常に便利である。
``` cpp
string str = "abc";
str.push_back('d');         // 末尾に追加
str.inert(str.begin(),'a'); // 文字列の途中に追加
str.pop_back(); // 末尾を削除

```

## char
文字を格納できる変数である。配列やポインタを使用すれば文字列も保存できる。

``` cpp
char c = 'a';
char cs[] = "abc";
char *cp = "abc";

```
## 解説
- 文字列リテラルは""で囲われた文字列のこと
- 文字列リテラルは初期化時にメモリのどこかに保存され残り続ける。
- char型の配列では文字列リテラルをコピーしている。
- char型のポインタでは文字列リテラルのアドレスを代入することで文字列を記録している。

## 参考
- [string](http://vivi.dyndns.org/tech/cpp/string.html#decl)
- [charとポインタ](https://programming.pc-note.net/c/pointer4.html)