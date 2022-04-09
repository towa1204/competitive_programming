#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;



int main() {
    int N,M;
    cin >> N >> M;
    vector<vector<int>> v(N+1);
    vector<int> H(N+1);
    for(int i=1; i<=N; i++){
        cin >> H.at(i);
    }
    int n1,n2;

    for(int i=0; i<M; i++){
        cin >> n1 >> n2;
        v.at(n1).push_back(n2);
        v.at(n2).push_back(n1);
    }
    int cnt = 0;
    for(int i=1; i<=N; i++){
        bool f = true;//最大がh.at(i)の状態->false
        for(int j=0; j<v.at(i).size(); j++){
            if(H.at(i) <= H.at(v.at(i).at(j))){
                f = false;
                break;
            }
        }
        if(f == true){
            cnt++;
        }
    }
    cout << cnt << endl;
}