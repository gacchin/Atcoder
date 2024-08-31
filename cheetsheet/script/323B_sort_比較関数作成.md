### 解法


``` cpp
#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)

void solve(void){
    int n;
    vector<string> s(n);    // 総当たり表
    rep(i,n) cin >> s[i];
    vector<int> w(n);       // プレーヤースコア（プレーヤー１,２，・・・）
    rep(i,n){
        rep(j,n){
            if(s[i][j] == 'o') w[i]++;
        }
    }

    vector<int> ans(n);     // プレーヤー順位
    rep(i,n) ans[i] = i;
    sort(ans.begin(),ans.end(),[&](int a,int b){　 // 点数降順にプレーヤー番号を並び替える。
        if(w[a] == w[b]) return a < b;
        return w[a] > w[b];
    });
    // 点数が高い順に加えて同率順位の場合の複雑な条番号を並べる。件があるため自作関数を作成する。
    // &キャプチャ 関数の中の変数に全てアクセスできる
    // 競プロは＆でok
    // ans配列の比較対象と比較値を引数にとる。スコアを比較し高い場合はtrueを返す。スコアが同じ場合はプレーヤー番号が若いほうをtrueとする。
    // stable_sort 比較関数が同じ場合はもともとの順番を保つ
    
    rep(i,n) cout << ans[i]+1 << ' ';
    cout << endl;
    return;
}

int main(){
    solve();
    return 0;
}

```

### 解説
- 
### 参考
- [Atcoder 320_B](https://atcoder.jp/contests/abc320/tasks/abc320_b)