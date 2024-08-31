#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

/*
解法のポイント
・for文の2重ループの場合TLEとなる。
・尺取り法またはバケット法を用い、計算量O(N)で解く
・バケット法の場合、日にちと花火打ち上げ日の関係を一つの変数で表すことができる
・また、N日目が保証されていることからfor文は末尾から回すほうが効率よい
*/

// admin answer
int main(){
    int N,M;
    cin >> N >> M;
    vector<bool> f(N);
    
    rep(i,M){
        int a;
        cin >> a;
        f[a-1] = true;
    }
    
    vector<int> a(N);
    for(int i=N-1; i>=0; i--){
        if(f[i]) a[i] = 0;
        else a[i] = a[i+1] + 1;
    }

    rep(i,N) cout << a[i] << endl;

}

// my answer
// int main(){
//     int N,M;
//     cin >> N >> M;
//     vector<int> a(M);
//     vector<int> ans(N);
//     rep(i,M) cin >> a[i];
//     rep(i,M) a[i] = a[i] - 1;

//     int j = 0;
//     rep(i,N) {
//         if(i == a[j]) {
//             ans[i] = 0; j++;
//         }
//         else if(i < a[j]) ans[i] = a[j] - i;
        
//     }

//     rep(i,N) cout << ans[i] << endl;

//     return 0;
// }