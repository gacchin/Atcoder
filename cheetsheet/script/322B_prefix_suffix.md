### 解法
1. 接頭語と接尾語を判定する
2. 接頭語となる条件はsのi番目（0~n）までの文字とtのi番目（0~n）の文字が全て一致すること

``` cpp
#include <bits/stdc++.h>
using namespace std;

void solve(void){
    int n,m;
    string s,t;
    cin >> n >> m >> s >> t;

    int is_prefix = true;
    for(int i=0; i < n; i++){
        if(s[i] != t[i]) is_prefix = false;
    }

    int is_suffix = true;
    for(int i=0; i < n; i++){
        if(s[i] != t[m-n+i]) is_suffix = false;
    }

    if(is_prefix){
        cout << (is_suffix ? 0 : 1) << endl;
    }else{
        cout << (is_suffix ? 2 : 3) << endl; 
    }
    
    return;
}

int main(){
    solve();
    return 0;
}

```

### 解説
- is_prefixという変数名は、戻り値がbool値の変数でよく見られる手法。スネークケースという[命名規則](https://designsupply-web.com/media/development/4052/)。
- is_suffix ? 0 : 1　は３項演算子（演算に３つの項を要する）。条件を1行で簡潔に記載できる。cout内に書く場合は括弧が必要となる。


### 参考
- [Atcoder 322_B](https://atcoder.jp/contests/abc322)