#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int calc(int num) {
    int cnt = 0;
    while (num % 2 == 0) {
        num /= 2;
        cnt++;
    }
    return cnt;
}

int main() {
    int N, ans;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    ans = calc(A.at(0));

    for (int i = 1; i < N; i++) {
        ans = min(ans, calc(A.at(i)));
    }

    cout << ans << endl;

}
