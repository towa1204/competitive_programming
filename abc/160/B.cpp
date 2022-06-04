#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    long long X;

    cin >> X;

    long long gohyaku = X / 500;
    long long goen = (X%500)/5;

    cout << gohyaku*1000+goen*5 << endl;
}
