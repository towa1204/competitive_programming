#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data(5);
    for(int i=0; i<5; i++){
        cin >> data[i];
    }

    for(int i=0; i<4; i++){
        if(data[i] == data[i+1]){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}