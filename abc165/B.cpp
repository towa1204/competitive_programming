#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    long long X;
    cin >> X;

    long long y=100;
    long long cnt = 0;
    while(y<X){
        y += y/100;
        cnt++;
    }
    cout << cnt << endl;
}
