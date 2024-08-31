#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

void solve(void){
    int n;
    cin >> n;
    string s;
    int sw = 0;
    bool ans = true;
    rep(i,n){
        cin >> s;
        if(s == "salty"){
            sw = 0;
        }else{
            sw ++;
        }
        if(sw >= 2 && i !=(n-1)){
            ans = false;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
  

    return;
}

int main(){
    solve();
    return 0;
}