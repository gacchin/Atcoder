#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

/*

*/

int solve(){
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> c(n);
    rep(i,n){
        cin >> s[i] >> c[i];
    }
    // ユーザ名を辞書順に並べる
    sort(s.begin(),s.end());

    // 番号 0 ~ n-1
    // 総和
    int t = 0;
    rep(i,n){
        t += c[i];
    }   
    int ans = t % n;
    cout << s[ans] << endl;
    
    return 0;
}

int main(){
    solve();
    return 0;
}