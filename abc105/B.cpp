#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N;

    cin >> N;

    int x = N / 4;
    int y = N / 7;

    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= y; j++){
            int sum = 4 * i + 7 * j;
            if (sum == N) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}
