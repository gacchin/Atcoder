#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(ll i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647


/*
【最小値最適化】
・洞察力        ：４
・コーディング力：２

*/

int solve(){
  int n,k;
  cin >> n >> k;
  vector<int>a(n);
  rep(i,n) cin >> a[i];

  //昇順に並び替え
  sort(a.begin(),a.end());
  //全探索
  int ans =  1e9;
  rep(l,k+1){
    int r = l+n-k-1;
    int now = a[r]-a[l];
    ans = min(now,ans);
  }
  cout << ans << endl;
  return 0;

}

int main(){
    solve();
    return 0;
}