#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N, M;
    
    int sum = 0;
    int input;
    cin >> N >> M;
    rep(i,M){
        cin >> input;
        sum += input;
    }

    if(N-sum<0){
        cout << "-1" << endl;
    }else{
        cout << N-sum << endl;
    }
}