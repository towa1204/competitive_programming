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
    int N, L;
    cin >> N >> L;
    
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S.at(i);

    sort(S.begin(), S.end());

    string sum = "";
    for (int i = 0; i < N; i++) sum += S.at(i);

    cout << sum << endl;
}

int main() {
    solve();
}
