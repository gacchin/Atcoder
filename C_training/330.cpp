#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

/*
2024/1/5
*/

// int main(){
//     ll d;
//     cin >> d;

//     ll y = 2e6; // TLEとならない程度の十分の値
//     ll ans = d;
//     for(ll x=0; x<2e6; x++){
//         while(y > 0 && x*x + y*y > d){
//             y--;
//         }
//         // d以下で最もdに近い値
//         ans = min(ans, abs(x*x + y*y - d));
//         // d以上で最もdに近い値
//         ans = min(ans, abs(x*x + (y+1)*(y+1) - d));
//     }
//     cout << ans << endl;
// }

int main(){
    ll d;
    cin >> d;

    ll y = 0;
    ll ans = d;
    for(ll x = 2e6; x>=0; x--){
        while( x*x+y*y < d){
            y++;
        }
        ans = min(ans,abs(x*x+y*y-d));
        ans = min(ans,abs(x*x+(y-1)*(y-1)-d));
    }

    cout << ans << endl;

}