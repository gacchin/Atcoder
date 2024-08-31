#include <bits/stdc++.h>
using namespace std;
#define rep(a,b) for(int a=0 ; a < (b); a++)

void solve(){
    int q;
    cin >> q;
    vector<int> a;
    rep(i,q){
        int qi,qj;
        cin >> qi >> qj;
        if(qi == 1) a.push_back(qj);
        else if(qi == 2) {
            // 後ろからqj番目の値を出力
            int k = a.size() - 1;
            cout << a[k - qj + 1] << endl;
        }
    }    
}

int main(){
    solve();
    return 0;
}