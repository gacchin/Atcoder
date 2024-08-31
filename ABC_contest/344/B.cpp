#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;

// int main(){
//     vector<int> a(101);
//     int i = 0;
//     while(1){
//         cin >> a[i];
//         if(a[i] == 0) break;
//         i++;
//     }

//     for(int j = 0;j <= i; j++){
//         cout << a[i-j] << endl;
//     }

//     return 0;
// }

int main(){
    vector<int> a;

    while(true){
        int ca;
        cin >> ca;
        a.push_back(ca);
        if(ca == 0) break;
    }
    // method to add reversely.
    for(int i = a.size() - 1; i >= 0; i--){
        cout << a[i] << endl;
    }
}