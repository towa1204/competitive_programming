#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

bool has_divisor(int N, int i)
{
    if(i == N){
        return false;
    }

    if(N%i == 0){
        return true;
    }

    return has_divisor(N,i+1);
}

bool is_prime(int N)
{
    if(N == 1){
        return false;
    }
    else if(N == 2){
        return true;
    }
    else{
        return !has_divisor(N,2);
    }
}

int main() {
    cout << is_prime(1) << endl;
    cout << is_prime(2) << endl;
    cout << is_prime(12) << endl;
    cout << is_prime(13) << endl;
    cout << is_prime(57) << endl;
}