#include <bits/stdc++.h>
using namespace std;
#define rep(a,b) for(int a=0 ; a < (b); a++)

/*
    前にいるかどうかは人番号に対応する順番が分かるデータ構造にすればよい
    手段
        map : 2分探索のため計算量はO(logn)
        バケット法 : 計算量はO(1）


*/
void solve1(){
    int n;
    cin >> n;
    map<int,int> p;
    rep(i,n){
        int tmp;
        cin >> tmp;
        p[tmp] = i;
    }
    
    int q;
    cin >> q;
    rep(i,q){
        int a,b;
        cin >> a >> b;
        if(p[a] > p[b]) cout << b;
        else            cout << a;
        cout << endl;
    }
}

void solve2(){
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    vector<int> Q(n+1);
    rep(i,n) Q[p[i]] = i;

    int q;
    cin >> q;
    rep(i,q){
        int a,b;
        cin >> a >> b;
        if(Q[a] < Q[b]) cout << a << endl;
        else            cout << b << endl;
    }
}
int main(){
    // solve1();
    solve2();
    return 0;
}