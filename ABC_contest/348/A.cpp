#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  10000000000 // 2,147,483,647


int main(){
    int n;
    cin >> n;
    for(int i=1;i <=n; i++){
        if(i % 3 == 0) cout << 'x';
        else cout << 'o';
    }
    cout << endl;
    return 0;
}