#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#  include <debug_print.hpp>
#  define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#else
#  define debug(...) (static_cast<void>(0))
#endif

// log_(base)bを求める関数
double log_conv(int base, int a) {
    return log(a) / log(base);
}

void solve() {
    
}

int main() {
    int N, K;
    cin >> N >> K;

    cout << floor(log_conv(K, N)) + 1 << endl;
}
