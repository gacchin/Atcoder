#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;


int main(){
    string s;
    cin >> s;

    int cnt = 0;
    bool ans = 0;
    rep(i,s.size()){
        if(s[i] == '<' && cnt == 0){
            cnt ++;
        }
        else if(s[i] == '=' && cnt >= 1){
            cnt ++;
        }
        else if(s[i] == '>' && cnt > 1 && i == (s.size()-1)){
            ans = true;
        }else{
            break;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}