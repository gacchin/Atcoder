#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;



/*

*/

int main(){
    int n;
    cin >> n;
    vector<int> w(n),x(n);
    rep(i,n) cin >> w[i] >> x[i];
    int ans = 0;
    rep(t,24){
        int now = 0;
        rep(i,n){
            int y = (x[i]+t)%24;
            if (9 <= y && y <18) now += w[i];
        }
        ans = max(ans,now);
    }
    cout << ans << endl;

}