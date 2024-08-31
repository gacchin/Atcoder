#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647


int solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    vector<int> retu(0);

    for(int i = 0; i < n; i++){
        retu.push_back(a[i]);
        while(1){
            if(retu.size() <= 1) break;
            if(retu[retu.size()-1] != retu[retu.size()-2]) break;
            else{
                int sum = retu[retu.size()-1] + 1;
                retu.pop_back();
                retu.pop_back();
                retu.push_back(sum);
            }
        }
    }

    cout << retu.size() << endl;
    
    return 0;
}

int main(){
    solve();

    return 0;
}