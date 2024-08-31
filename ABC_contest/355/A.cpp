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
    int a,b;
    cin >> a >> b;

    if(a == b) cout << -1 << endl;
    else{
        if(a != 1 && b != 1) cout << 1 << endl;
        else if(a != 2 && b != 2) cout << 2 << endl;
        else if(a != 3 && b != 3) cout << 3 << endl;
    }

    return 0;
}

int main(){
    solve();
    return 0;
}