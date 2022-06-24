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
    int N, K;

    cin >> N >> K;

    vector<int> l(N);

    for (int i = 0; i < l.size(); i++) cin >> l.at(i);

    sort(l.begin(), l.end());
    reverse(l.begin(), l.end());

    int cnt = 0;

    for (int i = 0; i < K; i++) {
        cnt += l.at(i);
    }

    cout << cnt << endl;
}

int main() {
    solve();
}
