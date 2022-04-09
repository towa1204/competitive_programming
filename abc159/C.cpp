#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    double L;
    cin >> L;

    double len = L / 3.0;

    cout << std::fixed << std::setprecision(9) << len*len*len << endl;
}
