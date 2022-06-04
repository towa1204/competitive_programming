#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int K;
    int A, B;
    
    cin >> K;
    cin >> A >> B;

    for(int i=A; i<=B; i++){
        if(i%K == 0){
            cout << "OK" << endl;
            return 0;
        }
    }

    cout << "NG" << endl;
}
