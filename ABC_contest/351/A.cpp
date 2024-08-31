#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647


int solve(){

    int cnt = 0;
    rep(i,9){
        int tmp;
        cin >> tmp;
        cnt += tmp;
    }
    rep(i,8){
        int tmp;
        cin >> tmp;
        cnt -= tmp;
    }

    cout <<  cnt + 1 << endl;
    
    return 0;
}

int main(){
    solve();

    return 0;
}