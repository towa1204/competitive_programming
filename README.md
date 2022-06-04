# competitive_programming
競技プログラミング用のワークスペース

## 環境設定
* printデバッグに`debug_print.hpp`を使う
  * [競技プログラミングで print デバッグ | naskya.net](https://naskya.net/post/0002/)から拝借しています
* `kyopro hoge.cpp`でコンパイル
  * `~/.bashrc`にkyopro関数を設定しておく
    ```
    function kyopro() {
      command g++ -std=c++17 -I ~/competitive_programming -DLOCAL $1
    } 
    ```
