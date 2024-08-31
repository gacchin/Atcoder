#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

// int main(){
//     int x,y;
//     cin >> x >> y;

//     bool j;
//     if(x < y && y-x<=2) j = true;
//     else if(x > y && x-y <=3) j = true;
//     else j = false;

//     string ans;
//     (j == true)? ans = "Yes": ans = "No";
//     cout << ans << endl;

// }

// 模範回答
int main(){
    int x,y;
    cin >> x >> y;

    if(x-3 <= y && y <= x+2) cout << "Yes" << "\n";
    else    cout << "No" << "\n";

    return 0;
}