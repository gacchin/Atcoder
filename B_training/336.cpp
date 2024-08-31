#include <bits/stdc++.h>
using namespace std;
#define rep(a,b) for(int a=0 ; a < (b); a++)

/*
ｘを2進数表示したときの、上位ビットから順に1ビットずつを参照し、
0が何回連続で続くかを求める。
n < 10^9 < 2^30であるため、30回の計算量で解くことができる

*/
void solve(){
    int x;
    cin >> x;
    int cnt = 0;
    for(int i=0; i<32; i++){
        if(((x >> i) & 0b1) != 1) cnt ++;
        else    break;
    }
    cout << cnt << endl;
}

int main(){
    solve();
    return 0;
}