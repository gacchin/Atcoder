#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

void solve(void){
    int r;
    cin >> r;
    int ans = 0;
    if(r >= 1 && r <= 99){
        ans = 99 - r + 1;
    }else if(r >= 100 && r <= 199){
        ans = 199 - r + 1;
    }else if(r >= 200 && r <= 299){
        ans = 299 - r + 1;
    }else if(r >= 300 && r <= 399){
        ans = 399 - r + 1;
    }else;

    cout << ans << endl;
    return;
}

int main(){
    solve();
    return 0;
}