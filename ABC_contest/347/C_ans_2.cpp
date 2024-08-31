#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  10000000000 // 2,147,483,647

// 予定間が休日の日数以上となるか？
int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int w = a + b;
    vector<int> d(n);
    for(int i = 0; i < n; i++){
        cin >> d[i];
        d[i] %= w;
    } 
    sort(d.begin(),d.end());
    rep(i,n) d.push_back(d[i]+w); // 2週目を作成。リングバッファの際の部分をケア
    rep(i,n){
        // cout << d[i+n-1] - d[i] << endl;
        if(d[i+n-1] - d[i] < a){ // ex.)d[1]-d[0] = 5 - 4 = 1 ←4も含むため+1とする
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}