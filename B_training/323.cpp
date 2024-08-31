#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

int solve(){
    int n;
    cin >> n;
    string s[n];
    rep(i,n) cin >> s[i];

    vector<int> w(n,0);
    rep(i,n){
        rep(j,n){
            if(s[i][j] == 'o') w[i] ++;
        }
    }

    vector<int> ans(n);
    rep(i,n) ans[i] = i;

    /*
    sortの第3引数に関数を指定することで並び替え基準を変更できる。
    関数は2つの要素を比較してbool値を返す関数をつくる。
    デフォルト関数としてgreater()やless_equal()などがある。
    */
    sort(ans.begin(),ans.end(),[&](int a,int b){ 
        if(w[a] == w[b]) return a < b;
        return w[a] > w[b];
    });

    //同じことをstable_sortでもできる
    //比較関数が同じな場合はもともとの順序を保つ
    // stable_sort(ans.begin(),ans.end(),[&](int a, int b){
    //     return w[a] > w[b];
    // });


    rep(i,n) cout << ans[i] + 1 << ' ';
    cout << endl;

    return 0;
}

int main(){
    solve();

    return 0;
}