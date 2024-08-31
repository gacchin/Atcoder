#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;


int main(){
    int n;
    cin >> n;
    vector<int> c(n),p(n);
    rep(i,n) cin >> c[i] >> p[i];

    // クラス分け
    vector<int> a(n),b(n);
    rep(i,n){
        if(c[i] == 1) a[i] = p[i];
        else          b[i] = p[i];
    }



    // 累積和 半開区間で実装
    vector<int> aa(n+1),bb(n+1);
    rep(i,n){
        if(i==0){ 
            aa[i+1] = a[i];
            bb[i+1] = b[i];
        }else{
            aa[i+1] = a[i] + aa[i];
            bb[i+1] = b[i] + bb[i];
        }
    }

    // rep(i,n+1){
    //     cout << aa[i] << ',';
    // }
    // cout << endl;
    // rep(i,n+1){
    //     cout << bb[i] << ',';
    // }

    int q;
    cin >> q;
    rep(i,q) {
        int l,r;
        cin >> l >> r;
        l--;r--;
        // 半開区間[)のためｒ＋１する
        cout << aa[r+1] - aa[l] <<' '<< bb[r+1] - bb[l] << endl;
    }

    return 0;
}