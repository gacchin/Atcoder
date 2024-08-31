#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

int solve(string s, int m){
    int one = 0, two = 0;
    for(char c : s){
        if(c == '1') one ++; else two ++;
    }

    return (one + two) - min(m,one);

}

int main(){
    int n,m;
    string s;
    cin >> n >> m >> s;
    s += '0';   // 末尾に０をつけることで場合分けをなくす

    int ans = 0;
    string now = "";
    for(char c:s){
        if(c == '0'){
            ans = max(ans,solve(now,m));
            now = "";
        }else {
            now += c;
        }
    }

    cout << ans << endl;


}

// int main(){
//     int n,m;
//     string s;
//     cin >> n >> m;
//     cin >> s;

//     int br = m;
//     int lt = 0;
//     vector<int>lt_r(n);
//     int pt = 0;

//     rep(i,n){
//         if(s[i] == '1'){
//              if(br > 0)br--;
//              else lt ++;
//         }
//         else if(s[i] == '2') lt ++;
//         else if(s[i] == '0'){
//             br = m;
//             lt_r[pt] = lt;
//             pt++;
//             lt=0;
//         }
//     }

//     lt_r[pt] = lt;
//     // rep(i,n) cout << lt_r[i] << ",";
    
//     int max = *max_element(lt_r.begin(),lt_r.end());
//     cout << max << endl;

//     //全探索

//     //２のときロゴTシャツきる

//     //１のとき無地がある場合は無地をきる、ないときはロゴTシャツきる

//     //０のとき配列に各総数を配列に入れて、インクリメント

//     //　配列の一番大きいサイズが答え

// }