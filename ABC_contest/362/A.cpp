#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

void solve(void){
    int r,g,b;
    string s;
    cin >> r >> g >> b >> s;

    //　高橋君の嫌いな色以外で
    int ans;
    if(s == "Red"){
        ans = min(g,b);
    }
    else
    if(s == "Green"){
        ans = min(r,b);
    }
    else
    if(s == "Blue"){
        ans = min(r,g);
    }
    
    cout << ans << endl;
}

int main(){
    solve();
    return 0;
}