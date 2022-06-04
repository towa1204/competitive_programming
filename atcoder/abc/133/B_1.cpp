#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

// 浮動小数点の整数判定をしない別解

// 2点間の距離を計算
double calc_dist_pow(vector<int> a, vector<int> b) {
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += pow(a.at(i) - b.at(i), 2);
    }
    return sum;
}

void print_array(vector<int> a) {
    cout << "配列の表示" << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
}

// 与えられた引数が平方数かどうか判定
bool is_square(int d_2) {
    // 
    for (int i = 1; i <= (int)floor(d_2); i++) {
        if (i * i == d_2) {
            return true;
        }
    }
    return false;
}

int main() {
    int N, D;
    cin >> N >> D;

    vector<vector<int>> p(N, vector<int>(D));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) {
            cin >> p.at(i).at(j);
        }
    }

    int cnt = 0;
    // NC2=O(N^2)回比較
    for (int i = 0; i< N; i++) {
        for (int j = i + 1; j < N; j++) {
            int d2 = calc_dist_pow(p.at(i), p.at(j));
            if (is_square(d2)) cnt++;
        }
    }
    cout << cnt << endl;
}
