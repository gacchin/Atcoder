#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

int main(){
    string s = "wbwbwwbwbwbw"; // 12
    // int n = s.size() + 210;

    int w,b;
    cin >> w >> b;
    int n = w + b;
    int ww = 0,bb = 0;
    for(int i=0;i<s.size();i++){
        for(int j=0; j<n; j++){
            if(s[(i+j) % 12] == 'w') ww++;
            else                     bb++;
        }
        // cout << ww << ',' << bb << endl;
        if(ww == w && bb == b){
            cout << "Yes" << endl;
            return 0;
        }

        ww = 0;
        bb = 0;
    }
    cout << "No" << endl;

    return 0;

}