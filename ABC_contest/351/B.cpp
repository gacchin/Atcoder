#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647


int solve(){
    int n;
    cin >> n;
    // vector<vector<int>> a(n,vector<int>(n));
    // vector<vector<int>> b(n,vector<int>(n));
    string a[n],b[n];
    rep(i,n){
        cin >> a[i];
    }
 
    rep(i,n){
        cin >> b[i];
    }   

    rep(i,n){
        rep(j,n){
            if(a[i][j] != b[i][j]){
                cout << i + 1 << ' ' << j + 1 << endl;
            }
        }
    }   

    return 0;
}

int main(){
    solve();

    return 0;
}