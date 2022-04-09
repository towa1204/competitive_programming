#include <bits/stdc++.h>
using namespace std;

//すべての入力を受け取ってソートし重複していないのを取る
int main() {
    vector<string> v;  
    int n,cnt=1;
    string str;
    int f = 0;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n-1; i++){
        if(v[i] != v[i+1]){
            cnt++;
        }
    }
    cout << cnt << endl;
}