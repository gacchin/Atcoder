#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

int main(){
    string t;
    int n;
    vector<int> a(10);
    rep(i,n){
        cin >> a[i];
        vector<string>s(a[i]);
        rep(j,a[i]) cin >> s[j];
    }


    return 0;
}