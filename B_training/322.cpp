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
    int n1,n2;
    string s,t;
    cin >> n1 >> n2;
    cin >> s >> t;

    bool f=0,b=0;
    rep(i,s.size()){
        if(s[i] == t[i]) continue;
        f = 1;
    }
    rep(i,s.size()){
        if(s[s.size()-1-i] == t[t.size()-1-i]) continue;
        b = 1;
    }  

    if(f == 0 && b == 0) cout << 0 << endl; 
    if(f == 0 && b == 1) cout << 1 << endl;  
    if(f == 1 && b == 0) cout << 2 << endl; 
    if(f == 1 && b == 1) cout << 3 << endl;    
    return 0;
}

int main(){
    solve();

    return 0;
}