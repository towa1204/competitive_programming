#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    vector<vector<char>> data(N,vector<char>(N,'-'));

    rep(i,M){
        cin >> A[i] >> B[i];
    }

    rep(i,M){
        data[A[i]-1][B[i]-1] = 'o';
        data[B[i]-1][A[i]-1] = 'x';
    }

    rep(i,N){
        rep(j,N){
            cout << data[i][j];
            if(j < N-1){
                cout << ' ';
            }
        }
        cout << endl;
    }
}