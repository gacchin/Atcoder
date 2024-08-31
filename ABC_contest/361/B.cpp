#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647j

/*
分かりやすい変数あるいは構造体を作ることで、
可読性を向上させる
*/

struct Point {
    int x;
    int y;
    int z;
};

Point input(void){
    Point p;
    cin >> p.x >> p.y >> p.z;
    return p;
};

int solve_admin(){
    Point l1 = input();
    Point r1 = input();
    Point l2 = input();
    Point r2 = input();

    rep(i,2){
        if(r1.x <= l2.x) return false;
        if(r1.y <= l2.y) return false;
        if(r1.z <= l2.z) return false;
        swap(r1,r2);
        swap(l1,l2);
    }
    return true;

}

int z_cal(int az1,int az2,int bz1,int bz2);

int solve(){
    int a,b,c,d,e,f,g,h,i,j,k,l;
    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;

    int len_x = 0,len_y = 0,len_z = 0;
    int ax,ay;
    int bx,by;
    int cx,cy;
    int dx,dy;
    ax = g  ;   ay = h;
    bx = j  ;   by = h;
    cx = j  ;   cy = k;
    dx = g  ;   dy = k;

    if(d <= g || j <= a){
        cout << "No" << endl;
        return 0;
    }else if(e <= h || k <= b){
         cout << "No" << endl;
         return 0;       
    }else if(!z_cal(c,f,i,l)){
         cout << "No" << endl;
         return 0;               
    }else{
        cout << "Yes" << endl;
        return 0;
    }
    return 0;

    // if( d > ax && e >ay && a <= ax && b < ay){
    //     len_x = a - ax;
    //     len_y = b - ay;
    // }else if( d > bx && e >by && a < bx && b < by){
    //     len_x = a - bx;
    //     len_y = b - by;
    // }else if( d > cx && e >cy && a < cx && b < cy){
    //     len_x = a - cx;
    //     len_y = b - cy;
    // }else if( d > dx && e >dy && a < dx && b < dy){
    //     len_x = a - dx;
    //     len_y = b - dy;
    // }else {
    //     cout << "No" << endl;
    //     return 0;
    // }

    // len_z = z_cal(c,f,i,l);
    // if(len_z == 0){
    //     cout << "No" << endl;
    //     return 0;
    // }

    // cout << "Yes" << endl;

    // return 0;

}

int z_cal(int az1,int az2,int bz1,int bz2){
    int len_z = 0;

    if(bz1 >= az2 || az1 >= bz2){
        return len_z;
    }

    return 1;
}

int main(){
    if(solve_admin()){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}