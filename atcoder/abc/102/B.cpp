#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    int maxv = A.at(0), minv = A.at(0);
    for (int i = 0; i < N; i++) {
        maxv = max(maxv, A.at(i));
        minv = min(minv, A.at(i));
    }

    cout << maxv - minv << endl;
}
