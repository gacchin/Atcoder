#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

int main(){
    ll b;
    cin >> b;
    /*
    オーバフローしないようにfor分のループ数に定数を指定する。
    long :-9,223,372,036,854,775,808 から 9,223,372,036,854,775,807
    1≤B≤10^18
    15^15 = 4.3789389e+17
    16^16 = 1.8446744e+19
    → 15^15 < B < 16^16
    15とすればすべてを確認できる。
    */
    for(ll a = 1; a<= 15; a++){
        ll x = 1;
        rep(i,a) x *= a;
        if(x == b) {
            cout << a << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}