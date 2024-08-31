#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

struct Vector{
    int x,y;
    Vector(int x=0,int y=0):x(x),y(y){};
    Vector operator-(const Vector & p)const{
        return Vector(x-p.x,y-p.y);
    }
};

int norm2(Vector a, Vector b){
    Vector p = a - b;
    return p.x*p.x + p.y*p.y;
}

void solve(void){
    Vector a,b,c;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;

    int A,B,C;
    A = norm2(b,c);
    B = norm2(a,c);
    C = norm2(a,b);

    if(A+B == C || B+C == A || C+A == B) cout << "Yes" <<endl;
    else cout << "No" << endl;

    return ;
}

int main(){
    solve();
    return 0 ;
}