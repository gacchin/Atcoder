#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vvi = vector<vector<int>>;
using P = pair<int,int>;
#define INF  1000000000 // 2,147,483,647

/*　実践
listの使い方と特徴を抑える
vectorの多次元ベクトルの使い方
*/

/* 解説
考察しやすいよう、2次元座標に置き換えて考える
Ax > Ay && Cx < Cy とはつまり、座標xに対して座標yが右下にあると解釈できる
ここで、問いである最後まで残るカードの条件は自分のカードの右下に他のカードがないことである。
解法手順は下記の通り
１．カードをコストの昇順で並び替える。v=0、sはから集合で初期化する
２．i = 0,...,nの順に、Ai > vであるときsにAiを格納する。v = Ai で更新する
３．最終的なsが答えとなる。

※Ai > vとならないものは、自分の右下にカードがあるということ  

計算量はOlogn）

sortの計算量
sortとラムダ式の使い方

*/

struct card{
    int a;
    int c;
    int index;
};

int solve(){
    int n;
    cin >> n;
    vector<card> cards(n);
    for(int i = 0; i < n; ++i){
        int a,c;
        cin >> a >> c;
        cards[i] = {a,c,i};
    }

    sort(cards.begin(),cards.end(),[&](const auto &l,const auto &r){
        return l.c < r.c; 
    });

    int v = 0;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(cards[i].a > v){
            ans.push_back(cards[i].index);
            v = cards[i].a;
        }
    }

    sort(ans.begin(),ans.end());

    const int m = (int)ans.size();
    cout << m << endl;

    for(int i = 0; i < m; i++){
        cout << ans[i] + 1;
        if(i == m-1) cout << endl;
        else cout << ' ';
    }

    return 0;
}

int main(){
    solve();
    return 0;
}