#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;


int main(){
    int n,s,k;
    cin >> n >> s >> k;
    vector<int>p(n);
    vector<int>q(n);

    ll ans = 0;
    rep(i,n) {
        cin >> p[i] >> q[i];
        ans += p[i]*q[i];
    }

    if(ans >= s) ;
    else ans += k;

    cout << ans << endl;


}