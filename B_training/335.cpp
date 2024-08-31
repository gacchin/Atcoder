#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

/*
x,y,zの組み合わせで辞書順に並べるためには、
x,y,zの順で昇順にループを回せばよい
計算量は21*21*21 = 
*/
int solve(){
    int n;
    cin >> n;
    
    rep(x,n+1){
        rep(y,n+1){
            rep(z,n+1){
                if((x+y+z) <= n){
                    cout << x << ' '<< y <<' '<< z << endl;
                }
            }
        }
    }
    return 0;
}

int main(){
    solve();

    return 0;
}