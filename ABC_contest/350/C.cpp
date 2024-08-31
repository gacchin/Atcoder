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
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b[n];
    int bi = 0;
    rep(i,n) cin >> a[i] ;
    for(int i=0;i<n;i++){
        if(a[i] != (i+1)) {
            for(int j=0;j<n;j++){
                if(a[j] == (i+1)) {
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                    b[bi].push_back(a[i]);
                    b[bi].push_back(a[j]);
                    bi++;
                    break;
                } 
            }
        }
    }
    // rep(i,n) cout << a[i] << ',';
    cout << bi << endl;
    rep(i,bi){
        cout << b[i][0] << ' ' << b[i][1] << endl;
    }
    return 0;
}

int main(){
    solve();

    return 0;
}