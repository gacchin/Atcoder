#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

/*

*/

int ans(){
    int n, t;
    cin >> n >> t;
    vector<int> row(n), col(n);
    int dia1 = 0, dia2 = 0; // 対角線1,2

    return 0;
    




}

int solve(){
    int n,t;
    cin >> n >> t;
    vector<int> a(t);
    rep(i,t) cin >> a[i];

    //ビンゴカード（1次元）
    vector<int> card(n*n);
    //ビンゴカード（2次元）
    vector<vector<int>> card_2(n,vector<int>(n));

    //結果
    rep(i,t){
        card[a[i] - 1] = i+1;
    }
    
    // 変換（１次元→2次元）
    int k = 0;
    rep(i,n){
        rep(j,n){
            card_2[i][j] = card[k];
            k++;
        }
    }

    // rep(i,n){
    //     rep(j,n){
    //         cout << card_2[i][j] << ',';
    //     }
    //     cout << endl;
    // }

    int jug_num = 0;
    vector<int> b_tyn;
    int max_card = 0;

    //一番初めにビンゴするターンを求める
    //横
    rep(i,n){
        max_card = 0;
        rep(j,n){
            if(card_2[i][j] > 0) {
                jug_num ++;
                max_card = max(max_card,card_2[i][j]);
            }
        }
        if(jug_num == n){
            b_tyn.push_back(max_card);
        }
        jug_num = 0;
    }
    //縦
    rep(i,n){
        max_card = 0;
        rep(j,n){
            if(card_2[j][i] > 0) {
                jug_num ++;
                max_card = max(max_card,card_2[j][i]);
            }
        }
        if(jug_num == n){
            b_tyn.push_back(max_card);
        }
        jug_num = 0;
    }
    //ななめ１
    max_card = 0;
    jug_num = 0;
    rep(i,n){
        if(card_2[i][i] > 0) {
            jug_num ++;
            max_card = max(max_card,card_2[i][i]);
        }
    }
    if(jug_num == n){
        b_tyn.push_back(max_card);
    }
    jug_num = 0;

    //ななめ2
    max_card = 0;
    jug_num = 0;
    rep(i,n){
        if(card_2[i][n-1-i] > 0) {
            jug_num ++;
            max_card = max(max_card,card_2[i][n-1-i]);
        }
    }
    if(jug_num == n){
        b_tyn.push_back(max_card);
    }

    // rep(i,b_tyn.size()){
    //     cout << b_tyn[i] << ',';
    // }
    // cout << endl;

    int min_card = n*n+10;
    if(b_tyn.size() != 0){
        rep(i,b_tyn.size()){
            min_card = min(min_card,b_tyn[i]);
        }
    }else{
        cout << -1 << endl;
        return 0;
    }

    cout << min_card << endl;
    return 0;
}

int main(){
    solve();
    return 0;
}