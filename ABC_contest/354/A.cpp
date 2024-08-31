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
    int h;
    cin >> h;
    int ph = 0;
    int i = 0;
    while(1){
        ph += pow(2,i);
        if(ph > h){
            cout << i + 1 << endl;
            return 0;
        }
        i++;
    }
    return 0;
}

int main(){
    solve();
    return 0;
}