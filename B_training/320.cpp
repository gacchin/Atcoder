#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    string rt = s;
    reverse(rt.begin(),rt.end());
    return s == rt;
}
void solve(void){
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0; i<s.size();i++){
        for(int j=1; j<s.size()-i+1;j++){
            string t = s.substr(i,j);
            if(isPalindrome(t)) ans = max(ans,int(t.size()));
        }
    }
    cout << ans << endl;
    return;
}

int main(){
    solve();
    return 0;
}