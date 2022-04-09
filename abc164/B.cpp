#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,c,d;
    double x,y;

    cin >> a >> b >> c >> d;

    x = ceil(c/b);
    y = ceil(a/d);

    if(x <= y){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}