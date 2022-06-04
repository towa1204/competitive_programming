#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    string S;
    cin >> S;
    int sum = 1;
    for(int i=1; i<S.size(); i+=2){
        if(S[i] == '+'){
            sum++;
        }else if(S[i] == '-'){
            sum--;
        }
    }
    cout << sum << endl;
}