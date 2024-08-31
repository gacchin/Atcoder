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

    // i = 0 ~ nにおいて以下を実施
    // 1~9以下のｎの約数jを求める
    vector<int> div;
    for(int i = 1; i < n+1; i++){
        if(n%i==0) div.push_back(i);
    }

    // rep(i,div.size()) cout << div[i] << ',';

    string s;
    for(int i=0; i <= n; i++){
        s += '-';
        for(int j=1; j <= 9; j++){
            if(n%j == 0 && i % (n/j) == 0){
                s[i] = j + '0'; //文字コードベースの計算
                break;
            }
        }
    }

    cout << s << endl;

    return 0;
}

int main(){
    solve();

    return 0;
}