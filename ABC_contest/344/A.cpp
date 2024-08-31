#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

// int main(){
//     string s;
//     cin >> s;

//     int flg = 0;
//     rep(i,s.size()){
//         if(s[i] == '|') flg++;
//         if(flg != 1 && s[i] != '|') cout << s[i];
//     }
//     cout << endl;
//     return 0;
// }

int main(){
    string s;
    cin >> s;
    string t;
    int count = 0;
    
    // ans 1
    for(char c: s){
        if(c == '|') count ++;
        else if(count != 1)t += c;  // オペレータ演算子
    }    
    cout << t << endl;

    // ans 2
    int x = s.find('|'); 
    int y = s.rfind('|');
    cout << s.substr(0,x) + s.substr(y+1);

}