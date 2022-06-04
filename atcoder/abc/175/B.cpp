#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

bool is_triangle(int a, int b, int c) {
    return (a + b > c) && (b + c > a) && (c + a > b) ? true : false;
}

int main() {
    int N;
    cin >> N;

    vector<int> L(N);

    for (int i = 0; i < N; i++) cin >> L.at(i);

    int cnt = 0;
    // NC3の組み合わせ
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if ((L.at(i) != L.at(j) && L.at(j) != L.at(k) && L.at(i) != L.at(k)) && 
                    is_triangle(L.at(i), L.at(j), L.at(k))) cnt++;
            }
        }
    }
    cout << cnt << endl;
}
