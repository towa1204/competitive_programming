#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    int sum = 0;

    rep(i,N){
        cin >> v[i];
        sum += v[i];
    }

    int ave = sum / N;

    rep(i,N){
        v[i] = abs(v[i] - ave);
        cout << v[i] << endl;
    }
}