#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

// int main(){
//     int n;
//     cin >> n;
//     vector<int>a(n);
//     rep(i,n) cin >> a[i];
//     bool j = true;
//     for(int i=0; i<n-1; i++) if(a[i] != a[i+1]) j=false;
//     if(j) cout << "Yes" << endl;
//     else  cout << "No" << endl;
// }

// 模範解答
// １．1つめとそれ以外を比較
// ２．ソートする。1番目と最後を比較する
// ３. setを使用する。自動的にソート、かつ、重複がないデータ構造

int main(){
    int n;
    cin>> n;
    set<int> s;
    rep(i,n){
        int a;
        cin >> a;
        s.insert(a);
    }
    if (s.size() == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}