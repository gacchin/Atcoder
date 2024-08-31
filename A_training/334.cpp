#include <bits/stdc++.h>
using namespace std;

// if-else : 一般的
// int main(){
//     int b,g;
//     cin >> b >> g ;
//     if(b > g) cout << "Bat" << endl;
//     else      cout << "Glove" << endl;
// }

// ３項演算子 : よりシンプル
int main(){
    int b,g;
    cin >> b >> g ;
    cout << (b>g ? "Bat" : "Glove") << endl;
}

