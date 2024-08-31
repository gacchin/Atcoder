# コンストラクタ
## 概要
構造体における、コンストラクタの概念と使用方法について記す。  
コンストラクタとは初期化関数と言い換えることができ、構造体を定義した後、
自動で呼び出される関数である。コンストラクタは構造体内と構造体外の2パターンの定義方法がある。
ここでは構造体内の定義方法について説明する。
## コード
### 定義
``` cpp
構造体名(仮引数リスト) : 初期化子リスト
{
    実行文;
}
```
構造体名：定義した構造体の名前  
仮引数　：初期化時に代入する受け入れ先。関数と同じ  
初期化子：各メンバ変数とその初期値（仮引数）。メンバ変数(初期値)　のように記述する

### 使用例
``` cpp
struct Vector{
    int x,y;
    Vector(int x=0,int y=0): x(x),y(y){}       // コンストラクタ
    Vector operator-(const Vector& v) const{   // 演算子オーバーロード
        return Vector(x-v.x, y-v.y);           
    }
    int dot(const Vector& v) const{            // メンバ関数
        return x*v.x + y*v.y;
    }
};
```
## 解説
- constと関数
- 演算子オーバーロード
- 構造体とクラスの違いは？？  
クラスは変数だけではなく関数も定義できる,,,というわけではない。構造体でも関数定義可能なため。違いはデフォルトのアクセシビリティである。classはprivate,structはpublicである。

## 参考
- [コンストラクタ](https://theolizer.com/cpp-school1/cpp-school1-13/)
- [constと関数](https://qiita.com/hhgghhh/items/e44c384561ca159d6411)
- [参照とポインタ](https://qiita.com/agate-pris/items/05948b7d33f3e88b8967)
- [演算子オーバーロード](https://monozukuri-c.com/langcpp-operator-overload/#toc4)
- [this](https://monozukuri-c.com/langcpp-this-pointer/)
- [classとstructの違い](https://qiita.com/pink_bangbi/items/e25302df7f4ba7fa0db4
)