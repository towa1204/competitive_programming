# competitive_programming
競技プログラミング用のワークスペース

## 環境設定
* printデバッグに`debug_print.hpp`を使う
  * [競技プログラミングで print デバッグ | naskya.net](https://naskya.net/post/0002/)から拝借しています
  * `debug()`の引数に変数を設定すると、標準エラー出力に変数名と変数の中身が出力される
  * `debug_print.hpp`は最後にインクルードする
* `kyopro hoge.cpp`でコンパイル
  * `~/.bashrc`にkyopro関数を設定しておく
    ```
    function kyopro() {
      command g++ -std=c++17 -I ~/competitive_programming -DLOCAL $1
    } 
    ```
* ファイル生成
  * ABCのファイル生成スクリプト [#1](https://github.com/towa1204/competitive_programming/issues/1) 参照
