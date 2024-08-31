#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    rep(i,n) cin >> a[i];

    sort(a.begin(),a.end());

    // a0 + 6 > ai　となるaiの数をカウント

    int mx = 0;
    int r = 0;
    for(int l=0; l<n; l++){
        while( a[r] < a[l] + m && r < n) r++;
        mx = max(r-l,mx);
    }

    cout << mx << endl;
}