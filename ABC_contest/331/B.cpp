#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,s,m,l;
    cin >> n >> s >> m >> l;

    int r = 0; // 残り
    int ans = 100000;
    rep(i,1000){
        r = 6*i;
        if(r >= n) {
            ans = min(i*s,ans);
            break;
        }
        rep(j,1000){
            r = 6*i + 8*j;
            if(r >= n) {
                ans = min(i*s + j*m,ans);
                break;
            }
            rep(k,1000){
                r = 6*i + 8*j + 12*k;
                if(r >= n) {
                    ans = min(i*s + j*m + k*l,ans);
                    break;
                }
            }
        }
    }

    cout << ans << endl;

}