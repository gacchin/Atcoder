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
    int n,q;
    cin >> n >> q;
    vector<bool> t(n,false); //歯の状態
    rep(i,q){
        int tr;
        cin >> tr;
        tr--;
        if(t[tr] == false) t[tr] = true; // 抜く
        else               t[tr] = false;// 生える
    }  
    int cnt = 0;
    rep(i,n){
        if(t[i] == true) cnt ++;
    }
    cout << n - cnt << endl;

    return 0;
}

int main(){
    solve();

    return 0;
}