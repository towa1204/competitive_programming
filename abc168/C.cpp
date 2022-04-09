#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265358979323846264338327950L

int main() {
    int A,B,H,M;

    cin >> A >> B >> H >> M;

    int huns = 6 * M;
    long double jis = (long double)(60 * H + M)*0.5;
    long double angle = abs(huns - jis)*PI/180.0;

    long double c = sqrt((long double)(A*A + B*B) - (long double)(2*A*B)*cosl(angle));
    cout << fixed << setprecision(30) << c << endl;
}
