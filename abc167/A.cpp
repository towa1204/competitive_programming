#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    string S,T;

    cin >> S >> T;
    for(int i=0; i<S.size(); i++){
        if(S[i] != T[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
