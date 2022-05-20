#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    string s;

    cin >> s;

    bool flag = false;
    int start, end;
    for (int i = 0; i < s.size(); i++) {
        if (!flag) {
            // Aのステップ
            if (s[i] == 'A') {
                start = i;
                flag = true;
            }
        } else {
            // Zのステップ
            if (s[i] == 'Z') {
                end = i;
            }
        }
    }
    cout << end - start + 1 << endl;
}
