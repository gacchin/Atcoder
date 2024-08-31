#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;


int main(){
    int h,w,n;
    string t;
    cin >> h >> w >> n;
    cin >> t;
    vector<string> s(h);
    for(int i = 0; i<h; i++) cin >> s[i];
    bool ans = true;
    int idx = 0;
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            ans = true;
            int ii = i;
            int jj = j;
            if(s[i][j] == '#') ans = false;continue;

            rep(k,n){
                if(t[k] == 'L') jj--;
                else if(t[k] == 'R') jj++;
                else if(t[k] == 'U') ii--;
                else if(t[k] == 'D') ii++;
                
                if(jj <= 0 || jj >= (w-1)){
                    ans = false;break;
                }
                if(ii <= 0 || ii >= (h-1)){
                    ans = false;break;
                }

                if(s[ii][jj] == '#'){
                    ans = false;break;
                }
            }
            if(ans) {
                idx ++;
                // cout << i << ',' << j << ',' << s[i][j] << endl;
            }
        }
    }

    cout << idx << endl;
    
    return 0;
}