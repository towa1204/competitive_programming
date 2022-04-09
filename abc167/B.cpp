#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    long long A,B,C,K;

    cin >> A >> B >> C >> K;

    // for(int i=1; i<=K; i++){
    //     if(i<=A){
    //         sum++;
    //     }else if(i>(A+B) && i<=A+B+C){
    //         sum--;
    //     }
    // }

    if(K<=A){
        cout << K << endl;
    }else if(K <= A+B){
        cout << A << endl;
    }else{
        cout << A - (K - (A + B)) << endl;
    }
}
