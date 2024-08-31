#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

// int main(){
//     string s;
//     cin >> s;

//     vector<int>c(100);

//     rep(i,s.size()){
//         int b = 'a';
//         c[s[i]-b]++; 
//         // cout << s[i]-b << endl;  
//     }

//     int mx = 0;
//     int p = 0;
//     rep(i,c.size()){
//         if(mx < c[i]) {
//             mx = c[i];
//             p = i;
//         }
//     }

//     cout << char(p+'a') << endl;

//     return 0;
// }

int main(){
    string s;
    cin >> s;

    int a[128]={0}; 
    for(char c:s){
        ++a[c];
    }

    char ans = 'a';
    for(char c = 'b'; c <= 'z'; c++){
        if(a[c] > a[ans]) ans = c;
    }

    cout << ans << endl;   
}