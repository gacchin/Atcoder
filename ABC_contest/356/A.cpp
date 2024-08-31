#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

/*　解法
１．リバースした数列を作成する
→ reverse関数を使用する
２．直接出力する

*/


int solve2(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    rep(i,n) a[i] = i+1;
    reverse(a.begin()+(l-1), a.begin()+r);
    rep(i,n){
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}

int solve(){
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> a(n);
    rep(i,n){
        a[i] = i + 1;
    }

    while(l<r){
        swap(a[l-1],a[r-1]);
        l++;r--;
    }

    for(int i=0; i<n; i++){
        if(i != 0) cout <<' ';
        cout << a[i];
    }
    cout << "\n";

    return 0;
}

int main(){

    solve2();
    return 0;
}