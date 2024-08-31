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
    for(int i = 0; i<n; i++){
        for(int j = 1; i+j < n;j++){
            array_char.insert(s.substr(i,j));
        }
    }

    cout << array_char.size();

    return 0;
}