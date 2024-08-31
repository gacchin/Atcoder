#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    string ans = "";
    for(int i=0; i<n; i++){
        ans = ans + "10";
    }
    ans = ans + '1';

    cout << ans << endl;

    return 0;
}