#include <bits/stdc++.h>
using namespace std;

/*再回答*/
int main() {
    int N;
    string S;

    cin >> N >> S;

    int left = 0;
    int cnt = 0;
    int Mc[26]={0};
    while(left < N){
        int right = left + 1;
        while(right < N and S[left] == S[right]) right ++; 
        int c = S[left] - 'a';
        // if(Mc[c] < right - left) Mc[c] = right - left;
        Mc[c] = max(Mc[c], right - left);
        left = right;
        cnt = 0;
    }
    int ans = 0;
    for(int i=0; i<26; i++){
        ans += Mc[i];
    }
    
    cout << ans << endl;

}

/*模範解答*/
// int main() {
//     int n;
//     string s;
//     cin >> n >> s;
//     vector<int> mx(26); //(文字,連続回数)
//     int l = 0;          // 文字の始まり（=連続一回目の文字）
//     while (l < n) {
//         int r = l + 1;  // 比較する配列の要素番号
//         while (r < n and s[l] == s[r]) ++r; // 同じの場合rを更新
//         int c = s[l] - 'a';         // 'a'を基準にアスキーコードの文字コードに置き換える
//         mx[c] = max(mx[c], r - l);  // 最大値の更新.r-lは連続回数.
//         l = r;                      // 比較する文字の更新
//     }
//     int ans = 0;
//     // 各文字の連続回数を総和する。
//     for (int i = 0; i < 26; i++) {
//         ans += mx[i];
//     }
//     // cout << ans << endl;
// }


/* 自分の回答*/
// int main(){
//     int N;
//     string S;
//     int a[30]={0};
//     char b[30];
//     cin >> N >> S;

//     int j = 0;
//     for(int i=0; i<N; i++){
//         if(i==0) {
//             a[j]++;
//             b[j] = S[i];
//         }
//         else{
//             if(S[i] == S[i-1]) {
//                 if(a[j] == 0) {
//                     b[j] = S[i];
//                 }
//                 a[j]++;
//                 }
//             else {
//                 for(int k=0; k<j; k++){
//                     if(S[i-1] == S[k]){
//                         if(a[j] > a[k]){
//                             a[k] = a[j];
//                             a[j] = 0;
//                             j--;
//                         }                  
//                     }
//                 }
//                 j++;
//                 a[j]++;
//                 b[j] = S[i];
//             }
//         }
//     }
    
//     cout << j << endl;
//     for(int i=0; i<=j; i++){
//         cout << b[i] << ',';
//     }
//     cout <<  endl;

//     int sum = 0;
//     bool flg = false;
//     int dif = 0;
//     for(int i=0; i<30; i++){
//         if(i == 0) sum += a[i];
//         else{
//             for(int j=0; j<i; j++){
//                 // cout << a[i] << ',' << a[j] << endl;
//                 if(b[i] == b[j]){
//                     if(a[i] > a[j]){
//                         dif = a[i] - a[j]; 
//                     }else flg = true;
//                 } 
//             }
//             if(flg == false) {
//                 if(dif > 0) sum += dif;
//                 else sum += a[i];
//             }
//             dif = 0;
//             flg = false;
//         }
//     }

//     cout << sum << endl;
// }
