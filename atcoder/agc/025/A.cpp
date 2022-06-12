#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#  include <debug_print.hpp>
#  define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#else
#  define debug(...) (static_cast<void>(0))
#endif

int calcSum(int N) {
    int sum = 0;
    while (N != 0) {
        sum += N % 10;
        N /= 10;
    }
    return sum;
}

void solve() {
    // 計算量 O(N)*O(log_{10}N) = 10^5 * log_{10}10^5= 5 * 10^5 だから全探索でokなはず
    int N;

    cin >> N;

    int ans = 100000; // 最小値の上限:10^5
    for (int i = 1; i <= N / 2; i++) {
        ans = min(ans, calcSum(i) + calcSum(N - i));
    }

    cout << ans << endl;
}

int main() {
    solve();
}
