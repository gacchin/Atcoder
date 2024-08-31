#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

/*
必要な知識
・vector配列の操作方法

アルゴリズムの知識は求められない。
手順通りに実装できるかどうか


*/
int main(){
    int n,m;    // n人、m問

    cin >> n >> m;
    vector <int> a(m);
    vector <string> s(n);

    rep(i,m) cin >> a[i];
    rep(i,n) cin >> s[i];
    
    // プレイヤーの得点数を求める。
    vector <int> p(n);
    rep(i,n){
        p[i] += i+1;
        rep(j,m){
            if(s[i][j] == 'o') p[i] += a[j];
        }
    }
    // 各プレイヤーの中の一番高い得点を求める。
    int mx;
    rep(i,n) mx = *max_element(p.begin(),p.end());

    // cout << mx << endl;

    // 回答；選択肢となる得点を抽出、高い順に足していく
    vector <int> cnt(n);
    rep(i,n){
        vector<int> f(m);
        rep(j,m){
            if(s[i][j] == 'x') f.push_back(a[j]);
        }
        sort(f.begin(),f.end());
        cnt[i] = 0;
        while(p[i] < mx){
            p[i] += f.back();
            f.pop_back();
            cnt[i] ++;
        }
    }

    rep(i,n) cout << cnt[i] << endl;




}