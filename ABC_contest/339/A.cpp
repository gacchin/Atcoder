#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

// int main(){
//     string s;
//     cin >> s ;

//     int n = 0;
//     int sc = s.size()-1;
//     rep(i,s.size()){
//         // 後ろから探索し文字数を更新
//         if(s[sc-i] != '.') n ++;
//         else    break;
//     }
//     cout << s.substr(s.size()-n,n) << endl;
//     return 0;
// }

// 最後のピリオドの位置を見つける
int main(){
    string s;
    cin >> s;
    int pi = -1;
    rep(i,s.size()){
        if(s[i] == '.')pi = i;  // ピリオドの位置を更新する
    }
    string ans = s.substr(pi+1);    // ピリオドの位置の次の文字から末尾まで
    cout << ans << endl;
    return 0;

}