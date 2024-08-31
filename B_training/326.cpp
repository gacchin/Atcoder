#include <bits/stdc++.h>
using namesapace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

/*
解法１：計算
＜各位の求め方＞
100の位 n/100 mod 10
10の位 n/10 mod 10
1の位 n mode 10
→つまりxの位は　n/x mod 10で求まる
学び
*/

bool check(int i){
    int c100 = i/100 % 10;
    int c10 = i/10 % 10;
    int c1 = i % 10;
    return c100*c10 == c1;
}

int main(){
    int n;
    cin >> n;

    for(int i = n; n <= 919; i++){
        if(check(i)){
            cout << i << endl;
            return 0;
        }
    }
}