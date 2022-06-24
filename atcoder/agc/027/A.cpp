#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#  include <debug_print.hpp>
#  define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#else
#  define debug(...) (static_cast<void>(0))
#endif

void solve() {
    int N;
    long long x;
    cin >> N >> x;

    vector<long long> a(N);
    for (int i = 0; i < N; i++) cin >> a.at(i);

    sort(a.begin(), a.end());

    int cnt = 0;
    for (int i = 0; i< N; i++) {
        if (a.at(i) <= x) {
            x -= a.at(i);
            cnt++;
        } else {
            break;
        }
    }

    if (cnt == N && x > 0) cnt--;

    cout << cnt << endl;
}

int main() {
    solve();
}
