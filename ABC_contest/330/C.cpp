#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// 模範解答
int main(){
    ll D;
    cin >> D;
    ll  y = 2e6;
    ll ans = 2e6;
    for(ll x=0; x<2e6; x++){
        while(y > 0 && x*x + y*y > D){
            y--;
        }   
        ans = min(ans,abs(x*x + y*y - D));
        ans = min(ans,abs(x*x + (y+1)*(y+1) - D));
    }

    cout << ans << endl;


}


// int main(){
//     int D;
//     cin >> D;
//     int D_sqrt = sqrt(D);
//     // cout << D_sqrt << endl;

//     int dif,dif_old,x,x_id,ans;
//     for(int i=1; i < D_sqrt+2; i++){
//         x_id = i;
//         dif = pow(i,2) - D;
//         if(dif == 0){
//             x_id = i;
//             ans = 0;
//             break;
//         }
//         else if(dif > 0) {
//             if(abs(dif) < abs(dif_old)) x_id = i;
//             else x_id = i - 1;
//             break;
//         }
//         dif_old = dif;;
//     }

//     cout << pow(x_id+1,2) - D << endl;


//     // cout << dif_old <<"," << x_id << endl;
//     if(ans != 0){
//         int y,y_id;
//         for(int i=1; i < D_sqrt+2; i++){
//             y_id = i;
//             dif = D - pow(x_id,2) - pow(i,2);
//             if(dif == 0){
//                 y_id = i;
//                 ans = 0;
//                 break;
//             }
//             else if(dif < 0) {
//                 y = dif_old;
//                 y_id = i - 1;
//                 ans = y;
//                 break;
//             }
//             dif_old = dif;;
//         }
//     }

//     cout << ans << endl;

// }