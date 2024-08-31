#include <bits/stdc++.h>
using namespace std;

void test(){
    /* 2次元配列の宣言
        (-1,-1,-1),
        (-1,-1,-1),
        (-1,-1,-1)

    */
    //10×10の配列
    vector<vector<int>> val(10,vector<int>(10,-1));

    /* N×0の2次元配列
        (),
        (),
        ()
    */
   // 10 * 0 array, 後から要素を追加
   vector<vector<int>> val2(10); 
   val2[0].push_back(0);
   val2[1].push_back(1);
   val2[2].push_back(2);

   // 2次元配列もどき。1次元配列×N
   vector<int> val3[10];
   val3[0].push_back(0);
   val3[0].push_back(0);


   // assign,resizeを用いた初期化
   // assignは指定した要素数を全て初期化できる
   vector<int> val4(4);
//    val4.resize(10,-1);
   val4.assign(10,-1);
    for(int i=0; i<val4.size(); i++){
        cout << val4[i] << ',';
    }
    cout << endl;
    


}

void solve(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int inp = 0;
            cin >> inp;
            if(inp == 1) cout << j + 1 << ' ';
        }
        cout << endl;
    }
}

int main(){
    // solve();
    test();

    return 0;

}