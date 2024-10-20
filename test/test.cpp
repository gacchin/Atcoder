#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)

void solve(void){
    string s;
    cin >> s;

    int ans = 0;
    rep(i,s.size()){
        for(int j = 1; j < s.size() + 1 - i; ++j){
            string tmp = s.substr(i,j);
            // cout << tmp << endl;

            string tmp2 = tmp;
            reverse(tmp2.begin(),tmp2.end());

            // 回文判定
            // Yes? 最大値を更新
            if(tmp == tmp2) ans = max(ans,int(tmp.size()));
            
        }
    }

    cout << ans << endl;

    return;

}

int main(){
    solve();
    return 0;
}