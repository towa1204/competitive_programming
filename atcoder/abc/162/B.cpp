#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    long long N;
    cin >> N;
    long long sum = 0;
    for(int i=1; i<=N; i++){
        if(i%3==0 || i%5==0){
            continue;
        }
        sum += i;
    }
    cout << sum << endl;
}