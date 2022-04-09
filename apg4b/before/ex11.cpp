#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main() {
    int N, A;
    string op;
    int B;
    cin >> N >> A;

    rep(i,N){
        cin >> op >> B;
        if(op == "+"){
            A += B;
        }else if(op == "-"){
            A -= B;
        }else if(op == "*"){
            A *= B;
        }else if(op == "/"){
            if(B == 0){
                cout << "error" << endl;
                break;
            }else{
                A /= B; 
            }
        }
        cout << i+1 << ":" << A << endl;
    }
}