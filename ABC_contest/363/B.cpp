#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

void solve(void){
    int n,t,p;
    cin >> n >> t >> p;
    vector<int> l(n);
    rep(i,n) cin >> l[i];

    int day_cnt = 0;
    int hum_cnt = 0;
    while(1){
        rep(i,n){
            if(l[i] >= t) hum_cnt ++; 
        }
        if(hum_cnt >= p){
            break;
        }

        rep(i,n){
            l[i] ++; 
        }
        hum_cnt = 0;
        day_cnt ++;
    }
    cout << day_cnt << endl;

    return;
}

int main(){
    solve();
    return 0;
}