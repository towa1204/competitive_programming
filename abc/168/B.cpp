#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int K;
    string S;

    cin >> K >> S;

    if(S.size() <= K){
        cout << S << endl;
    }else{
        string ans="";
        for(int i=0; i<K; i++){
            ans += S[i];
        }
        cout << ans+"..." << endl;
    }
}
