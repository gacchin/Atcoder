#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

int main(){
    string s;

    cin >> s;
    
    bool ans = true;
    rep(i,s.size()){
        int c = s[i];
        if(i == 0){
            if(c > 0x5a) ans = false;
            else ;
        }else {
            if(c <= 0x5a) ans = false;
            else ;
        }
    }

    if(ans) cout << "Yes" << endl;
    else    cout << "No" << endl;

    return 0;
}