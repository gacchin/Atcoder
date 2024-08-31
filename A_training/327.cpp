#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

int main(){
    int n;
    string s;
    cin >> n >> s;

    string ans = "No";
    for(int i=1; i<n; i++){
        if(s[i-1] == 'a' && s[i] == 'b') ans = "Yes";
        if(s[i-1] == 'b' && s[i] == 'a') ans = "Yes";
    }
    cout << ans << endl;

}