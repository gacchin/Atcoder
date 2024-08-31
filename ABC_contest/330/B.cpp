#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

// 模範解答
// 
int main(){
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> a(n);

    rep(i,n) cin >> a[i];
    rep(i,n){
        a[i] = clamp(a[i],l,r); //コンパイルのVer変更で対応可能
        cout << a[i] << ' ';
    }

    cout << endl;
    return 0;
}


// int main(){
//     int N,L,R;
//     int A[200000];
//     cin >> N >> L >> R;

//     bool jud = true;
//     int x[200000];
//     for(int i=0; i<N; i++) cin >> A[i];
//     for(int i=0; i<N; i++){
//         if(L > A[i]) x[i] = L;
//         else if (L == A[i]) x[i] = L;
//         else if(L < A[i]){
//             int tmp = abs(A[i]) - abs(L);
//             if(tmp + L <= R) x[i] = L + tmp;
//             else x[i] = R;
//         }
        
//         // for(int j=L; j<R+1; j++){
//         //     bool jud = true;
//         //     for(int k=L; k<R+1; k++) if(abs(j - A[i]) > abs(k - A[i])) jud = false;
//         //     if(jud == true) x[i] = j;continue;
//         // }
//     }

//     for(int i=0; i<N; i++) {
//         if(i == N-1) cout << x[i] << endl;
//         else cout << x[i] << " ";
//     }
// }