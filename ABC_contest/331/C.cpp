#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(long long i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    // バケットに入れる
    int b[1000000+1] = {0};
    rep(i,n) b[a[i]] += 1;
    // rep(i,n) cout << b[i] << ',';
    // cout << endl;

    // 抜き出し,ソート
    // vector<int> aa;
    // rep(i,1000000+1){
    //     if(b[i]>0) aa.push_back(i);
    // }
    // // rep(i,n) cout << aa[i] << ',';


    // 累積和
    vector<ll> s(1000000+2);
    s[0] = 0;
    rep(i,1000000+2) {
        s[i+1] = s[i];
        if(b[i+1] > 0) s[i+1] += (i+1)*b[i+1]; 
    }

    // rep(i,10) cout << s[i] << ',';

    

    //
    vector<ll> c(n);
    rep(i,n){
        c[i] = s[1000000+1] - s[a[i]];  
        cout << c[i] << " ";
        // cout << s[a[i]] << " ";
    }
    cout << endl;

    return 0;

}