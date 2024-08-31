#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

const int di[] = {-1,0,1,0};
const int dj[] = {0,1,0,-1};


int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    vector<P> ps;
    rep(i,n)rep(j,n){
        if(s[i][j] == 'P') ps.emplace_back(i,j);
    }

    map<vector<P>,int> dist;
    queue<vector<P>> q;
    dist[ps] = 0;  
    q.push(ps);

    while(!q.empty()){
        ps = q.front();q.pop();
        int d = dist[ps];
        rep(v,4){
            vector<P> nps;
            for(auto [i,j] : ps){
                int ni = i+di[v],nj = j+dj[v];
                if(ni < 0 || nj < 0 || ni >= n || nj >= n || s[ni][nj] == '#'){
                    ni = i; nj = j;
                }
                nps.emplace_back(ni,nj);
            }
            if(dist.count(nps)) continue;
            dist[nps] = d+1;
            q.push(nps);
        }
    }

    const int INF = 1001001001;
    int ans = INF;
    for(auto [ps,d] : dist){
        if(ps[0] == ps[1]) ans = min(ans,d);
    }
    if(ans == INF) ans = -1;
    cout << ans << endl;
    return 0;


}