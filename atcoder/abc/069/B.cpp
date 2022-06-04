#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    string s;

    cin >> s;

    cout << s[0] + to_string(s.size() - 2) + s[s.size() - 1] << endl;
}
