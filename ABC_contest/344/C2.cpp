#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define MAXV    300000000

int main(){
    vector<vector<int>> a(3);
    // 空の配列をn個持つ配列を宣言
    vector<int> n(3);



    for(int i=0; i < 3; i++){
        cin >> n[i];
        // cout << a[i].size() << ",";
        
        // 配列に配列を代入
        a[i] = vector<int>(n[i]);
        // cout << a[i].size() << endl;
        for(int j=0; j < n[i]; j++){
            cin >> a[i][j];
        }
    }

    unordered_set<int> st;
    rep(i,n[0]){
        rep(j,n[1]){
            rep(k,n[2]){
                st.insert(a[0][i] + a[1][j] + a[2][k]);
            }
        }
    }

    int q;
    cin >> q;
    rep(i,q) {
        int x;
        cin >> x;
        if(st.count(x)) cout << "Yes\n";
        else cout << "No\n"; 
    }

}