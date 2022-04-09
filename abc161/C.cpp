#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    long long N, K;
    cin >> N >> K;
    long ans = N % K;
    long ans1 = (-1*N) % K + K;
    cout << min(ans,ans1) << endl;
}
