#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647


int main(){
    int n;
    cin >> n;
    vector<int>a(n),c(n);
    rep(i,n) cin >> a[i] >> c[i];

    unordered_map<int,int> d;

    rep(i,n){
        d[c[i]] = INF;
    }

    rep(i,n){
        if(d[c[i]] > a[i]){
            d[c[i]] = a[i];
        }
    }

    int max_val = 0; 
    auto begin = d.begin(), end = d.end();
    for (auto iter = begin; iter != end; iter++) {
        if(max_val < iter->second){
            max_val = iter->second;
        }
    }
    cout << max_val << endl;
    
    return 0;
}