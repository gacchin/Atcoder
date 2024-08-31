#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  10000000000 // 2,147,483,647

int main(){
    ll n,a,b;
    cin >> n >> a >> b;
    vector<ll> d(n),dd(n);
    for(ll i = 0; i < n; i++){
        cin >> d[i];
    } 

    ll d_max = 0,d_min = INF;

    for(ll i = 0; i < n; i++){
        dd[i] = d[i] % (a+b);
        d_max = max(dd[i],d_max);
        d_min = min(dd[i],d_min);
    }

    ll d_gap = d_max - d_min;

    if(d_gap <= (a-1)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}