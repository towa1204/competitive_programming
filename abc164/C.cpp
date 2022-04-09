#include <bits/stdc++.h>
using namespace std;

//愚直にやってみた場合
int main() {
    vector<string> v;  
    int n;
    string str;
    int f = 0;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> str;
        if(i==0){
            v.push_back(str);
        }else{
            for(auto itr=v.begin(); itr!=v.end(); itr++){
                if(*itr == str){
                    f = 1;
                    break;
                }
            }
            if(f==0){
                v.push_back(str);
            }
            f=0;
        }
    }
    cout << v.size() << endl;
}