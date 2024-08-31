#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define MAXV    300000000


// int main(){
//     int n,m,l,q;
//     cin >> n;
//     vector<int> a(n);
//     rep(i,n) cin >> a[i];
//     cin >> m;
//     vector<int> b(m);
//     rep(i,m) cin >> b[i];
//     cin >> l;
//     vector<int> c(l);
//     rep(i,l) cin >> c[i];
//     cin >> q;
//     vector<int> x(q);
//     rep(i,q) cin >> x[i];

//     vector<bool> sum(MAXV);
//     rep(i,n){
//         rep(j,m){
//             rep(k,l){
//                 if(a[i]+b[j]+c[k] <= MAXV){
//                     sum[a[i]+b[j]+c[k]] = true;
//                 }
//             }
//         }
//     }

//     rep(i,q){
//         if(sum[x[i]] == true) cout << "Yes" << endl;
//         else                  cout << "No"  << endl;
//     }

//     return 0;
// }

int main(){
    vector<int> n(3);
    vector<vector<int>> a(3);
    rep(j,3){
        cin >> n[j];
        a[j] = vector<int>(n[j]); // これ何している？
        // n[j]はvectorクラスの値（int）を指すので型変換している。
        rep(i,n[j]) cin >> a[j][i];
    }

    unordered_set<int> st;       // どんなデータ構造？
    rep(i,n[0])rep(j,n[1])rep(k,n[2]){
        int s = a[0][i] + a[1][j] + a[2][k];
        st.insert(s);
    }
    /*
    std::set 順序付きソート集合　
    std::set<style> name;
    set.insert()    O(logN)
    set.erase(
    set.find()      return value : iterator
    set.count()     return value : size_t,0 or 1
    *size_tはCPUのメモリ空間によって変動する。32bitCPUであれば32bitであり、
    64bitCPUTであれば64bitである。意図としてはアドレス空間の抽象化。
    
    類似のコンテナ
    std::unordered_set　連想コンテナクラス、ハッシュテーブルによって実装
    クラスメンバはsetと同じ。insert, eraseの計算量がO(1)で済む。
    重複を許さない。
    std::unordered_map　mapはキーと値を要素として指定するのに対して、unordered_setは
    キーのみを要素として指定する。
    */

    int q;
    cin >> q;
    rep(qi,q){
        int x;
        cin >> x;
        if(st.count(x)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
    

}