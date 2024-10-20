### 解法
1. 世界標準時が0時~23時までを1時間刻みでforループで回す。
2. その時、基準時間内に収まる国の人数の総和を求め、全ループ回したときの最大値を求める
   * 標準時がt時のときi国の時刻はxi+t時となる。
   * 24以上となるときは時刻が繰り上がるためxi+t mod 24で時刻を求める 

``` cpp
#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)


void solve(void){
    int n;
    cin >> n;
    vector<int> w(n),x(n);
    rep(i,n) cin >> w[i] >> x[i];
    int ans = 0;
    rep(t,24){
        int now = 0;
        rep(i,n){
            int y = (t + w[i]) % 24 ;
            if(9 <= y && y <= 18) now += w[i];
        }
        ans = max(ans,now);
    }

    cout << ans << endl;
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