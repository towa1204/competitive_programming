#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    string S;

    cin >> S;

    int ans = 700;
    for (char c : S) {
        if (c == 'o') {
            ans += 100;
        }
    }

    cout << ans << endl;
}
