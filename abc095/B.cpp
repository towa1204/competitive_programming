#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N, X;
    cin >> N >> X;
    vector<int> m(N);

    int sum = 0;
    int min_m = 1001;
    for (int i = 0; i < N; i++) {
        cin >> m.at(i);
        sum += m.at(i);
        min_m = min(min_m, m.at(i));
    }

    int ans = N;
    X -= sum;

    ans += X / min_m;

    cout << ans << endl;
}
