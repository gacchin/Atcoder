#include <bits/stdc++.h>
using namespace std;

void solve_admin(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n,0);
    for(int i = 0; i < n-1; i++){
        cin >> a[i];
    }

    int sum = 0;
    while(a.back() <= 100){
        vector<int> b = a;
        sort(b.begin(),b.end());
        sum = 0;
        for(int i=1; i < n-1; i++){
            sum += b[i];
        }
        
        if(sum >= x){
            cout << a.back() << endl;
            return ;
        }
        a.back()++;
    }
    cout << -1 << endl;
    return;
}

void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n-1);
    for(int i=0; i<n-1; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    int sum = 0;
    // min 
    for(int i=0; i<n-2; i++){
        sum += a[i];
    }
    if(sum >= x){
        cout << 0 << endl;
        return;
    }

    // min, max 以外
    sum = 0;
    for(int i=1; i<n-2; i++){
        sum += a[i];
    }
    int ans_tmp = x - sum;
    if(x >= sum && ans_tmp <= 100){
        if(ans_tmp >= a[0] && ans_tmp <= a[n-2]){
            cout << ans_tmp << endl;
            return;
        }
    }

    // max
    sum = 0;
    for(int i=1; i<n-1; i++){
        sum += a[i];
    }
    if(sum >= x){
        cout << a[n-2] << endl;
        return;
    }  

    cout << "-1" << endl;   
    return;
}

int main(){
    solve_admin();

    return 0;
}