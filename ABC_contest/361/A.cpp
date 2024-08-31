#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

int solve(){    
    int n,k,x;
    cin >> n >> k >> x;
    vector<int> a(n);
    rep(i,n) cin >> a[i];   

    int j = 0;
    rep(i,n+1){
        if(i == k) {
            cout << x << ' ';
            j++;
        }
        else{
            cout << a[i-j] << ' ';
        }
    }
    cout << endl;

    return 0;
}

int main(){
    solve();
    return 0;
}