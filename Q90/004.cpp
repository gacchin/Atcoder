#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int>(w));
    vector<vector<int>> b(h,vector<int>(w));

    rep(i,h)rep(j,w) cin >> a[i][j];

    // 前処理
    vector<int> li(h,0),co(w,0);
    rep(i,h){
        rep(j,w){
            li[i] += a[i][j];
        }
    }

    rep(i,w){
        rep(j,h){
            co[i] += a[j][i];
        }
    }
    // rep(i,w) cout << li[i] << ',';
    // cout << endl;
    // rep(i,h) cout << co[i] << ',';
    // cout << endl;

    // 総和
    rep(i,h){
        rep(j,w){
            // TLEとなる
            // rep(k,h) b[i][j] += a[k][j];
            // rep(k,w) b[i][j] += a[i][k];
            // b[i][j] -= a[i][j];

            cout << co[j] + li[i] - a[i][j] << ' ';
        } 
        cout << endl;
    }

    return 0;
}