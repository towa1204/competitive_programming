#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    string S;
    cin >> S;
    if(S[2] == S[3] && S[4] == S[5]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
