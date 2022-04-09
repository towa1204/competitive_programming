#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    rep(i,N){
        cin >> A[i];
    }
    rep(i,N){
        cin >> P[i];
    }

    int cnt =0;

    for(int i: A){
        for(int j: P){
            if(i+j == S){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}