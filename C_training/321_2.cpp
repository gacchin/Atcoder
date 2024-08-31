#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

int main(){
    int k;
    cin >> k;

    vector<ll>ans;
    for(ll i=2; i<(1 << 10); i++){
        ll n = 0;
        int cnt = 0;
        for(int j=9; i >= 0; j--){
            if(i & (1 << j)){
                n *= 10;
                n += j;
            }
        }
        ans.push_back(n);
    }
    sort(ans.begin(),ans.end());
    cout << ans[k-1] << endl;
    return 0;
}