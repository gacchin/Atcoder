#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  2100100100 // 2,147,483,647

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int j = 0;
    unordered_set<string> array_char;

    while(j != n){
        rep(i,n - j){
            string tmp={};
            rep(k,j+1){
                
                tmp.push_back(s[i+k]);
                // tmp.append(1,s[i+k]);
                // tmp += s[i+k];
            }
            array_char.insert(tmp);
        }
        j ++;
    }
    cout << array_char.size() << endl;
    return 0;
}