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

    bool flag = false;
    int cnt = 0;
    while (true) {
        for (int i = 0; i < N; i++) {
            if (A.at(i) % 2 == 0) {
                A.at(i) /= 2;
            } else {
                flag = true;
            }
        }
        if (flag) break;
        cnt++;
    }

    cout << cnt << endl;

}
