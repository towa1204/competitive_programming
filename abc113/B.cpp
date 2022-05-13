#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N, T, A;
    cin >> N;
    cin >> T >> A;
    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H.at(i);
    }

    pair<int, double> ans = make_pair(0, abs((T - H.at(0) * 0.006) - A));
    for (int i = 0; i < N; i++) {
        if (abs((T - H.at(i) * 0.006) - A) < ans.second) {
            ans = make_pair(i, abs((T - H.at(i) * 0.006) - A));
        }
    }
    cout << ans.first + 1 << endl;
}
