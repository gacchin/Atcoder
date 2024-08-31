#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,L;
    int A[1000];
    cin >> N >> L;
    for(int i=0; i<N; i++) cin >> A[i];

    int ans = 0;
    
    for(int i=0; i<N; i++){
        if(A[i] >= L) ans ++;
    }

    cout << ans << endl;
    
}