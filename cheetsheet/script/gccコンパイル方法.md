# gccコンパイル方法
## コマンド
```
g++ "ファイル名.cpp"; ./a.out
```
## 解説
- g++はC++のコンパイラ
- "./"の'.'はカレントディレクトリをさし、'/'はファイルの区切りを指す。つまり./a.outで相対パスを示している。ファイル名だけで実行できないのは、環境変数にファイル名のPATHが登録されていないための可能性がある。

## 参考
- [g++](https://kaworu.jpn.org/cpp/g%2B%2B#.E6.A6.82.E8.A6.81)
- [./について](https://www.theserverside.com/blog/Coffee-Talk-Java-News-Stories-and-Opinions/Why-must-you-use-to-run-your-Ubuntu-scripts-The-meaning-of-Linuxs-dot-slash-explained)
