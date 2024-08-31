#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

bool f(string s){
    int d = abs(s[0] - s[1]); // 文字コードとして計算される
    return d == 2 || d == 3;  // 1:長さ2,0:長さ1
}

int solve(){
    string s,t;
    cin >> s >> t;
    bool sl = f(s); // 長さを判定(0,1)
    bool tl = f(t); 

    if(sl == tl) cout << "Yes" << endl;
    else         cout << "No" << endl;

    return 0;
}

int main(){
    solve();

    return 0;
}