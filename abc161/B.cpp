#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    int sum = 0;

    rep(i,N){
        cin >> A[i];
        sum += A[i];
    }

    sort(A.begin(),A.end());
    reverse(A.begin(),A.end());

    double check = sum / double((4*M));
    bool flag = true;
    rep(i,M){
        if(double(A[i]) < check){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
