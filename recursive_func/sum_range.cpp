#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int sum_range(int a,int b){
    if(b == a){
        return a;
    }

    int s = sum_range(a,b-1);
    return s + b;
}

int main() {
    cout << sum_range(1,3) << endl;
    cout << sum_range(3,5) << endl;
}