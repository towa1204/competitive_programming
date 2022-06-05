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
    string nstr = to_string(N);
    for (int i = 0; i < nstr.size(); i++) {
        sum += nstr[i] - '0';
    }
    return sum;
}

void solve() {
    int N;
    int A, B;

    cin >> N >> A >> B;

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        // 各桁の和を求める
        int val = calcSum(i);
        if (val >= A && val <= B) sum += i;
    }
    cout << sum << endl;
}

int main() {
    solve();
}
