#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

vector<int> a[100]; // １次元配列を100作成したことと同じ
vector<int> b(100); // １次元配列を要素100で初期化

int main(){
    a[0].push_back(1);
    a[0].push_back(2);
    cout << a[0][1]<< endl;

}