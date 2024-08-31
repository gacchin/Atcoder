#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

#define MAX_x 60
#define MAX_y 40

// int main(){
//     ll n;
//     cin >> n;
//     rep(x,MAX_x){
//         rep(y,MAX_y){
//             ll xx = 1;
//             ll yy = 1;
//             rep(i,x){
//                 xx *= 2;
//             }
//             rep(i,y){
//                 yy *= 3;
//             }
//             if(xx > n) break;
//             else if(xx*yy > n) break;
//             else if(n == xx*yy){
//                 cout << "Yes" << endl;
//                 return 0;
//             }
//         }
//     }
//     cout << "No" << endl;
//     return 0;
// }

// 素因数分解
int main(){
    ll n;
    cin >> n;
    while(n%2==0) n /= 2;
    while(n%3==0) n /= 3;
    if(n == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}