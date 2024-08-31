#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int M,D;
    cin >> M >> D;

    int y,m,d;
    cin >> y >> m >> d;

    int yy=0;
    int mm=0;
    int dd=0;
    if(d == D) {
        if(m == M){
            yy = y + 1;
            mm = 1;
            dd = 1;
        }else{
            yy = y;
            mm = m + 1;
            dd = 1;
        }
    }else{
        yy = y;
        mm = m;
        dd = d + 1;
    }
    
    cout << yy << " " << mm << " " << dd << endl;


}