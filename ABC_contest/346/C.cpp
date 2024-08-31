#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = unsigned long long; // 符号なしバイト
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define MAX_VAL 2000000001

int main(){
    ll n,k;
    cin >> n >> k;
    // vector<int> a(n);
    // rep(i,n) cin >> a[i];
    unordered_set<ll> a;
    rep(i,n) {
        ll tmp;
        cin >> tmp;
        a.insert(tmp);
    }
    
    // 1 ~ kまでの総和 ->a
    ll sum_k = ((k+k*k)/2);

    ll sum_a = 0;
    for(auto x : a){
        if(x <= k) {
            // cout << x << ',';
            sum_a += x;
        }
    }
    // a - b;
    ll sum = sum_k - sum_a;
    cout << sum << endl;

    return 0;

}