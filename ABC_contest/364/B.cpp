#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

void solve(void){
    int h,w,s1,s2;
    string x;
    cin >> h >> w >> s1 >> s2;
    vector<vector<char>> c(h,vector<char>(w));
    rep(i,h)rep(j,w) cin >> c[i][j];
    cin >> x;

    s1--;s2--;

    rep(i,x.size()){
        if(x[i] == 'R'){
            if((s2+1 <= w-1) && c[s1][s2+1] == '.') s2 ++;
            else;
        }
        else if(x[i] == 'L'){
            if((s2-1 >= 0) && c[s1][s2-1] == '.') s2 --;
            else;
        }
        else if(x[i] == 'U'){
            if((s1-1 >= 0) && c[s1-1][s2] == '.') s1 --;
            else;
        }
        else if(x[i] == 'D'){
            if((s1+1 <= h-1) && c[s1+1][s2] == '.') s1 ++;
            else;
        }
    }

    cout << s1+1 <<' ' << s2+1 << endl;


    return;
}

int main(){
    solve();
    return 0;
}