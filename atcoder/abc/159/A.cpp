#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N,M;
    cin >> N >> M;

    int ans1 = N*(N-1)/2;
    int ans2 = M*(M-1)/2;

    cout << ans1 + ans2 << endl;
}
