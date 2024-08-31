#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

int func(int a,int b,int c){
    int cnt = 0;
    while(1){
        cnt ++;
        // 偶数の場合
        if(a > b && a > c) a = a/2;
        else if(b > a && b > c) b = b/2;
        else if(c > a && c > a) c = c/2;
        //　２．一致したら終了。一致しない場合1に戻る
        if(a == b && b == c) {
            return cnt;
        }   
    }

}

int main(){
    ll a,b,c;
    cin >> a >> b >> c;

    ll ans;
    ll com;
    
    //全て同じ辺の長さか
    if(a == b && b == c) {
        ans = 0;
        cout << ans << endl;
        return 0;
    }

    // 一つでも奇数があるｋ
    if((a%2 != 0)||(b%2 != 0)||(c%2 != 0)){
        ans = (a-1)+(b-1)+(c-1);
        cout << ans << endl; 
        return 0;  
    }
    //　関数にまとめる
    ans = func(a,b,c);
    cout << ans << endl;
 
    return 0;
}