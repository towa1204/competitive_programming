#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    string S;
    cin >> S;

    for (int i = 1; i <= S.size(); i++) {
        if (i % 2 == 1) {
            cout << S[i - 1];
        }
    }
    cout << endl;
}
