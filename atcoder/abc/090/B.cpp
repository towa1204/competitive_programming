#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#  include <debug_print.hpp>
#  define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#else
#  define debug(...) (static_cast<void>(0))
#endif

bool is_kaibun(int N) {
    int n = N;
    int reverse_num = 0;

    while (n != 0) {
        reverse_num *= 10; // 左シフト
        reverse_num += n % 10; // 最下位桁を取り出す
        n /= 10; // 右シフト
    }

    if (N == reverse_num) {
        return true;
    } else {
        return false;
    }
}

void solve() {
    int A, B; 
    cin >> A >> B;   

    int cnt = 0;
    for (int i = A; i <= B; i++) {
        if (is_kaibun(i)) cnt++;
    }
    cout << cnt << endl;
}

int main() {
    solve();
}
