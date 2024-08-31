#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    char s[300000];
    int a [300000];
    int as[300001];
    int r,l;

    cin >> n >> q;
    for(int i=1; i<=n; i++) cin >> s[i];
    for(int i=1; i<=n-1;i++) {
        if(s[i] == s[i+1]) a[i] = 1;
        // cout << a[i];
    }
    // cout << endl;
    
    
    for(int i=1; i<n; i++){
        as[i+1] = as[i] + a[i];
    }
    for(int i=0; i<q; i++){
        cin >> l >> r;
        cout << as[r] - as[l] << endl;
    }

    // debug
    // for(int i=0; i<n-1;i++) {
    //     cout << a[i];
    // }
    // cout << endl;
    // for(int i=0; i<n;i++) {
    //     cout << as[i] << ",";
    // }


}

// int main() {
//     int N,Q;
//     int r;
//     int l;
//     int a[300000];
//     int b[300000];
//     char s[300001];
    
//     int p[300000];
//     cin >> N >> Q ;
//     for(int i = 1; i <= N; i++) cin >> s[i];
    
//     for(int i=1; i<= N-1; i++) {
//         if(s[i]==s[i+1]) a[i] = 1;
//         else a[i] = 0;
//     }

//     for(int i=1; i<=N-1; i++){
//         b[i] = b[i-1] + a[i]; 
//     }

//     for(int i=1; i<=Q; i++){
//         cin >> l >> r;
//         cout <<b[r-1]-b[l-1]  << "\n";
//     }

//     return 0;
// }