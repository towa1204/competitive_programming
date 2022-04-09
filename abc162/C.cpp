#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int K;
    cin >> K;
    long long sum = 0;
    for(int i=1; i<=K; i++){
        for(int j=1; j<=K; j++){
            for(int k=1; k<=K; k++){
                sum += __gcd(__gcd(i,j),k);
            }
        }
    }
    cout << sum << endl;
}