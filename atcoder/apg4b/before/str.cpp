#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main() {
    string str = "hello";
    cout << str.at(0) << endl;
    cout << str.at(4) << endl;
    str[0] = 'a';
    cout << str << endl;
}