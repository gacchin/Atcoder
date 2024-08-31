#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

int main(){
    int n,q;
    string s;
    cin >> n >> q;
    cin >> s;

    // 累積和を用いて隣接する箇所を求める
    vector<int> is;
    is.push_back(0);
    for(int i=1;i<s.size();i++){
        if(s[i-1] == s[i]) is.push_back(is[i-1]+1); 
        else is.push_back(is[i-1]);
    }
    // for(int i : is) cout << i << ',' << endl;

    // Qごとの隣接する箇所を求める
    rep(i,q){
        int l,r;
        cin >> l >> r;
        cout << is[r-1] - is[l-1] << endl;
    }
}