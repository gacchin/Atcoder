#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;


int main(){
    int k,g,m;
    cin >> k >> g >> m;

    int mm = 0;
    int gg = 0;

    while (k > 0){
        if(gg == g) gg = 0;
        else if(mm == 0){
            mm = m;
        }else{
            while(1){   
                int a = g - gg;
                if(a != 0) {
                    if(mm >= a) {
                        gg += a; 
                        mm -= a;
                        break;
                    }else {
                        gg += mm; 
                        mm = 0;
                        break;
                    }
                } else{
                    break;
                }
            }
        }
        k--;
    }

    cout << gg << " " << mm << endl;


}