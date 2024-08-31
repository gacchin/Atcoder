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