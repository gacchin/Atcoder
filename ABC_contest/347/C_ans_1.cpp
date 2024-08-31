#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  2100100100 // 2,147,483,647

// 予定間が平日の日数以上となるか？
int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int w = a + b;
    vector<int> d(n);
    for(int i = 0; i < n; i++){
        cin >> d[i];
        d[i] %= w;
    } 
    sort(d.begin(),d.end());
    rep(i,n) d.push_back(d[i]+w); // 2週目を作成。リングバッファの際の部分をケア
    rep(i,d.size()-1){
        if(d[i+1]-d[i] - 1 >= b){ // ex.) d[i+1]=2,d[i]=1のとき差は1だが実際には中日はない。つまり-1する必要がある。
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}