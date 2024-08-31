#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

struct Edge{
    // to : 接続先
    // cost : 距離
    int to, cost;

    // コンストラクタ：初期化子リストを用いた初期化
    // この方法での初期化の方が効率的　https://zenn.dev/melos/articles/7b7fbc5fd41270gg
    Edge(int to=0, int cost=0):to(to),cost(cost){}
};

int main(){
    int n, m;
    cin >> n >> m;//町、道路

    // 2次元配列を宣言し、1次元配列分のみ初期化する
    vector<vector<Edge>> g(n); //グラフ　
    rep(i,m){
        int a, b, c;
        cin >> a >> b >> c;
        --a; --b;

        // ここでpush_backは使えない。
        // 現時点で違いは分からない
        g[a].emplace_back(b,c);
        g[b].emplace_back(a,c);
        // ノードの接続先とサイズを格納
    }

    // rep(i,n) cout << g[i].size()<< endl;


    /* ラムダ式
     [capture句](仮引数,)->戻り値のデータ型{本体}
     auto変数やテンプレート関数の引数に渡して使う.テンプレート関数は型をパラメータ化（変数化）でき、呼び出す際に型を指定する。
     ラムダ式の中で変数を使いたいときは、スコープ内に定義するか参照でキャプチャする必要がある。
     「&」をつけると、すべての変数を参照でキャプチャする。
    */

    //関数オブジェクトをセット
    /*
    
    */

    int ans = 0;
    vector<bool> visited(n);

    //テンプレート関数またはauto関数でオブジェクトを受ける
    auto f = [&](auto f, int v, int dist) -> void{
        visited[v] = true;
        ans = max(ans, dist);
        for(auto e : g[v]){ //範囲for文
            if(visited[e.to]) continue;
            f(f,e.to,dist+e.cost);
        }
        visited[v] = false;
    };

    rep(i,n) f(f,i,0);
    cout << ans << endl;

    return 0;
}
