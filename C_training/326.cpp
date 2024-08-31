#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

int main(){
    int n,m;
    cin >> n>> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());

    int ans = 0;
    int r = 0;
    rep(l,n){
        while(r < n && a[r] < a[l]+m)r++;
        ans = max(ans,r-l);
    }
    cout << ans << endl;

}