#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }

    int s = sum(n-1);
    return s + n;
}

int main() {
    cout << sum(1) << endl;
    cout << sum(10) << endl;
}