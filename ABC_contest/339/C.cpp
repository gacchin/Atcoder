#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

// int main(){
//     ll n = 0;
//     cin >> n;
//     vector<ll> a(n);
//     rep(i,n) cin >> a[i]; 

//     vector<ll> b(n);

//     b[0] = a[0];
//     for(ll i=1; i<n; i++){
//         b[i] = b[i-1]+a[i];
//     }
//     ll mn = 0;
//     for(ll i=0; i<n; i++){
//         mn = min(b[i],mn);
//     }

//     // cout << mn << endl;

//     ll hn = -mn;
//     for(ll i=0; i<n; i++){
//         hn += a[i];
//     }

//     cout << hn << endl;

//     return 0;
// }

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    ll y = 0,l = 0;
    rep(i,n){
        y += a[i];
        l = min(y,l);
    }

    ll ans = y + (-l);
    cout << ans << endl;
}