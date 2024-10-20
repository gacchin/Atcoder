### 解法１
forループで文字列の各文字を比較する

### 解法2
比較用の文字列をstringで作成し比較する


``` cpp
// 公式解法
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

``` cpp
// 個人回答
int n,m;
string s,t;
cin >> n >> m;
cin >> s >> t;

bool is_prefix = 0;
bool is_sufix = 0;
// prefix
string s_prefix = t.substr(0,n); 
if(s_prefix == s) is_prefix = true;

// suffix
string s_sufix = t.substr(m - s.size(),n); 
if(s_sufix == s) is_sufix = true;

int ans = 0;
if(is_prefix && is_sufix) ans = 0;
else if(is_prefix && !is_sufix) ans = 1;
else if(!is_prefix && is_sufix) ans = 2;
else if(!is_prefix && !is_sufix) ans = 3;

cout << ans << endl;

return;

```

### 解説
- is_prefixという変数名は、戻り値がbool値の変数でよく見られる手法。スネークケースという[命名規則](https://designsupply-web.com/media/development/4052/)。
- is_suffix ? 0 : 1　は３項演算子（演算に３つの項を要する）。条件を1行で簡潔に記載できる。cout内に書く場合は括弧が必要となる。


### 参考
- [Atcoder 322_B](https://atcoder.jp/contests/abc322)