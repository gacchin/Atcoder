#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

void solve(void){
    int n,k;
    string s;
    cin >> n >> k >> s;

    sort(s.begin(),s.end());

    int ans = 0;
    do{
        bool ok = true;
        for(int i=0; i < n-k+1; i++){
            string t = s.substr(i,k);
            string rt = t;
            reverse(t.begin(),t.end());
            if(t == rt) ok =false;
        }
        if(ok) ans ++;
    }while(next_permutation(s.begin(),s.end()));

    cout << ans << endl;
    return;
}

int main(){
    solve();
    return 0;
}