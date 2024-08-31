#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

struct graph {
    int to,cost;
    graph(int i=0, int j=0): to(i),cost(j){}
};

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<graph>> gr(n);

    int a,b;
    ll c;

    rep(i,m){
        cin >> a >> b >> c;
        --a;--b;
        gr[a].emplace_back(b,c);
        gr[b].emplace_back(a,c);
    }
    int ans = 0;
    vector<bool> visited(n);
    auto f = [&](auto f, int p, int len)->void{
        visited[p] = true;
        ans = max(ans,len);
        for(auto e: gr[p]){
            if(visited[e.to]) continue;
            f(f,e.to,len+e.cost);
        }
        visited[p] = false;
    };

    rep(i,n) f(f,i,0);

    cout << ans << endl;
    
}