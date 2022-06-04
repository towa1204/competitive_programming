#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N;
    int K,d;
    int num;
    set<int> S;
    
    cin >> N >> K;
    rep(i,K){
        cin >> d;
        rep(i,d){
            cin >> num;
            S.insert(num);
        }
    }

    cout << N - S.size() << endl;
}