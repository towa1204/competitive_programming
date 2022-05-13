#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int r, g, b;
    cin >> r >> g >> b;

    int num = r * 100 + g * 10 + b;
    
    if (num % 4) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

}
