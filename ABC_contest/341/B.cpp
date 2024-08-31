#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n+1);
    vector<ll> s(n+1),t(n+1);
    for(int i = 1;i < n+1;i++) cin >> a[i];
    for(int i = 1;i < n;i++) cin >> s[i] >> t[i];
    ll ans = a[n];
    for(int i = 1;i < n;i++){
        if(a[i] >= s[i]){
            ll b = a[i]/s[i];
            a[i] -= s[i]*b;
            a[i+1] += t[i]*b;
        }
    }
    ans = max(a[n],ans);

    cout << ans << endl;


    return 0;
}