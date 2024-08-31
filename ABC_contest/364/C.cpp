#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(ll i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

void solve(void){
    ll n,x,y;
    cin >> n >> x >> y;
    vector<ll> A(n),B(n);
    rep(i,n) cin >> A[i];
    rep(i,n) cin >> B[i];

    ll ans = INF;
    sort(A.begin(),A.end(), greater<ll>());
    sort(B.begin(),B.end(), greater<ll>());

    ll sum = 0;
    rep(i,n){
        sum += A[i];
        if(sum > x) ans = min(i+1,ans);
    }

    sum = 0;
    rep(i,n){
        sum += B[i];
        if(sum > y) ans = min(i+1,ans);
    }  

    if(ans >= n) ans = n;

    cout << ans << endl;

    return;
}

int main(){
    solve();
    return 0;
}