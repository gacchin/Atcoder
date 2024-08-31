#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n); // 「コンテナクラス」とは、クラス、構造体、POD（int 等のいわゆるプレーンな古い型; Plain Old Data）を複数入れることが出来る「入れ物」のことである。
    for(int i=0; i<n; i++) cin >> a[i];
    int m = *max_element(a.begin(),a.end());

    int ans = 0;
    for(int e : a) if(e != m) ans = max(ans,e);
    cout << ans << endl;

}






















/*模範解答*/
// int main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i=0; i<n; i++) cin >> a[i];
//     int m = *max_element(a.begin(), a.end());
//     int ans = 0;
    
//     // 拡張for文：配列、コンテナなどの要素数があるものの全要素に対して処理を行う。
//     // 範囲for文で配列aの要素を順番にeに代入
//     // 最大ではない値の中で、最大値を更新していく
//     for(int e : a) if (e != m) ans = max(ans,e); 
//     cout << ans << endl;
// }


// int main(){
//     int N;
//     int A[101];
//     int B[101]={0};

//     cin >> N;
//     for(int i=0; i<N; i++){
//         cin >> A[i];
//     }

//     for(int i=0; i<N; i++){
//         B[A[i]] ++;
//     }

//     int cnt = 0;
//     for(int i=101-1; i>1; i--){
//         if(B[i] != 0 && cnt == 0) {
//             cnt = 1;
//         }else if(B[i] != 0 && cnt == 1) {
//             cout << i << endl;
//             break;
//         }
//     }
// }