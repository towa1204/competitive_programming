#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N,M,X;
    int table[12][12];
    int ans = 1001001001;
    cin >> N >> M >> X;
    vector<int> C(N);
    rep(i,N){
        cin >> C[i];
        rep(j,M){
            cin >> table[i][j];        
        }
    }

    for(int i=0; i<(1<<N); i++){
        int cost = 0;
        vector<int> sum(M,0);
        for(int j=0; j<N; j++){
            if((i>>j) & 1){
                cost += C[j];
                for(int k=0; k<M; k++){
                    sum[k] += table[j][k];
                }
            }
        }
        bool check = true;
        for(int l=0; l<M; l++){
            if(sum[l]<X){
                check = false;
            }
        }
        if(check){
            ans = min(ans,cost);
        }
    }

    if(ans == 1001001001){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }

}
