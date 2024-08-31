#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;

const int di[] = {-1,0,1,0};
const int dj[] = {0,1,0,-1};

int main(){
    int h,w,n;
    cin >> h >> w >> n;
    vector<string> s(h,string(w,'.'));

    int i = 0, j = 0, v = 0;
    rep(ti,n){
        // 判定
        if(s[i][j] = '.'){
            s[i][j] = '#';
            v += 1;
        }else{
            s[i][j] = '#';
            v += 3;            
        }
        // 移動
        v = v%4;
        i += di[v]; j += dj[v];
        i = (i+h)%h;
        j = (j+w)%w;
    }

    rep(i,h) cout << s[i] << endl;
    return 0;
}

// int main(){
//     int h,w,n;
//     cin >> h >> w >> n;
//     vector<vector<char>> m(h,vector<char>(w));
//     rep(i,h)rep(j,w) m[i][j] = '.';

//     int hh = 0;
//     int ww = 0;
//     int d = 0;
//     int r = 0;
//     rep(i,n){
//         if(m[hh][ww] == '.'){
//             m[hh][ww] = '#';       
//             if(d != 3) d++;
//             else       d = 0;
//         }else{
//             m[hh][ww] = '.';
//             if(d != 0) d--;
//             else       d = 3;       
//         }

//         // index更新
//         if(d == 0) {
//             if(hh != 0) hh--;
//             else    hh = h-1;
//         }else if(d == 1){
//             if(ww != (w-1)) ww++;
//             else    ww = 0;            
//         }else if(d == 2){
//             if(hh != (h-1)) hh++;
//             else    hh = 0;            
//         }else if(d == 3){
//             if(ww != 0) ww--;
//             else    ww = w-1;            
//         }        
//     }

//     rep(i,h){
//         rep(j,w){
//             cout << m[i][j];
//         } 
//         cout << endl;
//     }
//     return 0;
// }