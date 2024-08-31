#include <bits/stdc++.h>
using namespace std;

// 尺取り法
int main(){
    int N,M;
    cin >> N >> M;
    vector <int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    sort(A.begin(),A.end());

    // for(int i=0; i<N; i++) cout << A[i] << ',';
    // cout << endl;

    int right = 0;
    int ans = 0;
    for(int left=0; left<N; left++){
        while(right < N && A[right] < A[left] + M) right++;
        
        // Answer
        ans = max(ans, right-left); // 半開区間 [left,right)のため差を取ることで要素数がわかる
    }
    cout << ans << endl;
}

// 愚直に全探索するとTLEとなる。
// int main(){
//     int N,M;
//     int s;
//     vector <int> A;
//     cin >> N >> M;

//     for(int i=0; i<N; i++){
//         cin >> s;
//         A.push_back(s);
//     };
//     sort(A.begin(), A.end());
//     int sum = 0;
//     for(int i=0; i<N; i++){
//         int comp = A[i] + M;
//         int cnt = 1;
//         for(int j=1+i; j<N; j++){
//             if(A[j] < comp) {
//                 cnt ++;
//                 // cout << i <<','<< j << ',' << A[j] <<','<< comp <<endl; 
//             }
//             else break;     
//         }
//         if(cnt > sum) sum = cnt;
//     }

//     cout << sum << endl;
    
// }