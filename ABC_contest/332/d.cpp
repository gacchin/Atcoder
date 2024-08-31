#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
int main(){
    int h,w;
    cin >> h >> w;
    vvi a(h,vector<int>(w));
    vvi b(h,vector<int>(w));
    rep(i,h)rep(j,w) cin >> a[i][j] ;
    rep(i,h)rep(j,w) cin >> b[i][j] ;

    queue<vvi> q;       // グラフをqueueで表現
    map<vvi,int> dist;  // 状態と距離の関係を保存
    
    /*
    queueにpushする関数
    ラムダ式で実装するこで効率化。
    データサイズを大きくしないために参照とする
    */
    auto push = [&](vvi& s, int d){ 
        if(dist.count(s)) return;
        dist[s] = d;
        q.push(s);
    };
    push(a,0);
    while(!q.empty()){
        vvi s = q.front();q.pop();
        int d = dist[s]; // 初期状態aからの距離

        //現在の状態から全通り試す
        //行
        rep(i,h-1) {
            vvi ns = s;
            swap(ns[i],ns[i+1]);
            push(ns,d+1);
        }
        //列
        rep(j,w-1){
            vvi ns = s;
            rep(i,h) swap(ns[i][j],ns[i][j+1]);
            push(ns,d+1);
        }
    }

    if(dist.count(b)) cout << dist[b] << endl;
    else cout << -1 << endl;
    return 0;

}


// int main(){
//     int h,w;
//     cin >> h >> w;

//     vector<vector<int>> a(h, vector<int>(w));
//     vector<vector<int>> b(h, vector<int>(w));
//     rep(i,h)rep(j,w) cin  >> a[i][j];
//     rep(i,h)rep(j,w) cin  >> b[i][j];

//     // デバッグ
//     // cout << endl;
//     // rep(i,h){
//     //     rep(j,w) cout << a[i][j] << ',';
//     //     cout << endl;
//     // }
//     // cout << endl;
//     // rep(i,h){
//     //     rep(j,w) cout << b[i][j] << ',';
//     //     cout << endl;
//     // }
//     int ans = 0;
//     int i = 0;
//     rep(j,w-1){
//         if(a[i][j] == b[i][j]) continue;
//         else{
//             if(a[i][j] == b[i][j+1] && a[i][j+1] == b[i][j]){
//                 vector<int> tmp(h);
//                 rep(i,h){
//                     tmp[i] = a[i][j];
//                     a[i][j] = a[i][j+1];
//                     a[i][j+1] = tmp[i];
//                 }
//                 ans ++;
//             }else{
//                 ans = -1;
//             }
//         }
//     } 
//     if(ans != -1){
//         int j = 0;
//         rep(i,h-1){
//             if(a[i][j] == b[i][j]) continue;
//             else{
//                 if(a[i][j] == b[i+1][j] && a[i+1][j] == b[i][j]){
//                     vector<int> tmp(w);
//                     rep(j,h){
//                         tmp[i] = a[i][j];
//                         a[i][j] = a[i+1][j];
//                         a[i+1][j] = tmp[i];
//                     }
//                     ans ++;
//                 }else{
//                     ans = -1;
//                 }
//             }
//         }      
//     }

//     if(ans == 0){
//         rep(i,h)rep(j,w){
//             if(a[i][j] != b[i][j]) {
//                 ans = -1;
//                 break;
//             }
//         }
//     }



//     cout << ans << endl;

// }