#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,d,p;
    cin >> n >> d >> p;
    vector<int> f(n);
    rep(i,n) cin >> f[i];

    sort(f.begin(),f.end());

    vector<ll> s(n+1);
    rep(i,n) s[i+1] = s[i] + f[i];

    ll ans = 1e18;
    rep(i,1e9){
        int r = max(0,n-i*d);
        ll now = s[r] + (ll)p*i;
        ans = min(now,ans);
        if(r == 0) break;
    }

    cout << ans << endl;
    return 0;
}