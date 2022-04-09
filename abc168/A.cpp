#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N;
    cin >> N;
    int value = N%10;
    if(value == 0 | value == 1 | value == 6 | value == 8){
        cout << "pon" << endl;
    }else if(value == 2 | value == 4 | value == 5 | value == 7 | value == 9){
        cout << "hon" << endl;
    }else{
        cout << "bon" << endl;
    }
}
