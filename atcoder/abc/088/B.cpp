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
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a.at(i);

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int ans = 0;
    for (int i = 0; i< N; i++) ans = i % 2 ? ans - a.at(i) : ans + a.at(i);

    cout << ans << endl;
}

int main() {
    solve();
}
