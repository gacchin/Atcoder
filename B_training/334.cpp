#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

/*


*/
ll f(ll r,ll m){
    return r/m;
}

int solve(){
    ll a,m,l,r;
    cin >> a >> m >> l >> r;

    l -= a; r -= a;

    if(l<0){
        ll X = -l/m+1;
        l += X*m; r += X*m;
    }

    ll ans = f(r,m) - f(l-1,m);
    cout << ans << endl;
    
    return 0;
}

int main(){
    solve();
    // solve2();

    return 0;
}