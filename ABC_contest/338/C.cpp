#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

#define mxq 1000001
#define INF -1000000000
int main(){
    int n;
    cin >> n;
    vector<int>q(n);
    vector<int>a(n);
    vector<int>b(n);
    rep(i,n) cin >> q[i];
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    // vector<int>bb(n);
    
    int ans = 0;
    rep(i,mxq){
        int y = mxq;
        rep(j,n){
            if(q[j] < a[j]*i)   y = INF;
            else if(b[j] > 0)   y = min(y,(q[j] - a[j]*i)/b[j]);   
        }
        ans  = max(ans,i+y); 
    }

    cout << ans << endl;

    return 0;
}