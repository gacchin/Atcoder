#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  10000000000 // 2,147,483,647



int main(){
    int n;
    cin >> n;
    vector<double>x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];

    rep(i,n){
        int ans = 0;
        double dist_max = 0;
        // cout << i << ':';
        rep(j,n){
            if(i == j) continue;
            double dist_temp = sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            if(dist_temp > dist_max){
                dist_max = dist_temp;
                ans = j;
            }
            // cout << '(' << x[i] << ',' << y[i] << ')' << '(' << x[j] << ',' << y[j] << ')' <<  dist_temp << ',';
        }
        // cout << endl;
        cout << ans+1 << endl;
    }

    return 0;
}