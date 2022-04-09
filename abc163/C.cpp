#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N;
    cin >> N;
    vector<int> v(N+1,0);
    int val;
    for(int i=2; i<=N; i++){
        cin >> val;
        v.at(val)++; 
    }

    for(int i=1; i<=N; i++){
        cout << v.at(i) << endl;
    }
}