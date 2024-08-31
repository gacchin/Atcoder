#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

// int main(){
//     int n;
//     string s;
//     cin >> n >> s;

//     vector<pair<char,int>> d;
//     d.emplace_back(s[0],0);
//     for(char c : s){
//         if(d.back().first == c)d.back().second ++;
//         else d.emplace_back(c,1);
//     }

//     vector<int> mx(26);
//     for(auto[c,len] : d){
//         mx[c - 'a'] = max(mx[c - 'a'],len); 
//     }

//     int ans=0;
//     for(int m : mx){
//         ans += m; 
//     }
//     cout << ans << endl;
// }

int main(){
    int n;
    string s;
    cin >> n >> s;

    // 文字と連続文字数をペアで保存。[a,1],[b,2],[a,3] ...
    vector<pair<char,int>> d;
    int r = 0;
    int l = 0;
    while(r < n){
        r = l + 1;
        while(s[l] == s[r]){
            r++;
        }
        d.emplace_back(s[l],r-l);
        l = r;
    }

    // cout << d[0].first << d[0].second << endl;
    // cout << d[1].first << d[1].second << endl;
    // cout << d[2].first << d[2].second << endl;

    // 文字の最大連続文字数を保存。[a,3],[b,2]...
    vector<int> mx(26,0);
    for(auto [c,len]:d){
        mx[c-'a'] = max(mx[c-'a'],len);
        // cout << c << ',' << mx[c-'a'] << endl;
    }
    // 最大文字数の和を出力
    int ans = 0;
    for(int v:mx){
        ans += v;
    }

    cout << ans << endl;

}