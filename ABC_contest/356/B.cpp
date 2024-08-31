#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

/*

*/

int solve(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c(n+m);

    rep(i,n) {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
        c[i] = tmp;
    }
    rep(i,m){
        int tmp;
        cin >> tmp;
        b[i] = tmp;
        c[i+n] = tmp;
    }

    sort(c.begin(),c.end());

    bool flg = false;
    rep(i,n+m){
        rep(j,n){
            if(c[i] == a[j] && flg == false){
                 flg = true;
                 break;
            }
            else if(c[i] == a[j] && flg == true) {
                cout << "Yes" << endl;
                return 0;
            }
            if(j == n-1) flg = false;
        }
    }

    cout << "No" << endl;

    return 0;
}

int main(){
    solve();
    return 0;
}