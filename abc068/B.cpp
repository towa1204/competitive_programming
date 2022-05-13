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
    int N; 
    cin >> N;

    pair<int, int> ans(1, calc(1));

    for (int i = 1; i <= N; i++) {
        if (calc(i) > ans.second) {
            ans = make_pair(i, calc(i));
        }
    }

    cout << ans.first << endl;
}
