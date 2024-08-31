#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

/*
sort,全探索 
*/
int solve(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i,n-1) cin >> a[i];

    while(a.back() <= 100){
        vector<int> b = a;
        sort(b.begin(),b.end());
        int s = 0;
        for(int i = 1; i < n-1; i++) s += b[i];
        // cout << a.back() << ',' << s << endl;
        if(s >= x){
            cout << a.back() << endl;
            return 0;
        }
        a.back()++;
    }
    cout << -1 << endl; 
    return 0;
}

int main(){
    solve();

    return 0;
}