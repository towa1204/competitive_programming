#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    vector<pair<int, int>> ar;
    int N;
    cin >> N;
    
    rep(i,N){
        int a,b;
        cin >> a >> b;
        ar.push_back(make_pair(b,a));
    }
    sort(ar.begin(),ar.end());
    rep(i,N){
        int n1,n2;
        tie(n1,n2) = ar[i];
        cout << n2 << " " << n1 << endl;
    }
}