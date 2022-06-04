#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    string S;
    cin >> S;

    string t = S;
    reverse(t.begin(),t.end());

    string s1="";
    string s2="";

    if(S == t){
        rep(i,(S.size()-1)/2){
            s1 += S[i]; 
        }
        string s11 = s1;
        rep2(i,(S.size()+3)/2-1,S.size()){
            s2 += S[i]; 
        }
        string s22 = s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        if(s1 == s11 && s2 == s22){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
