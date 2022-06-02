#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int A, B, C, X;

    cin >> A >> B >> C >> X;

    int cnt = 0;
    for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= B; j++) {
            for (int k = 0; k <= C; k++) {
                int sum = 500 * i + 100 * j + 50 * k;
                if (sum == X) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
}
