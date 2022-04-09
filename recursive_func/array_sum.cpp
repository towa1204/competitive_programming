#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int array_sum_from_i(const vector<int> &v,int i)
{
    //与えられた配列のi番目以降の要素の総和を計算
    if(i == v.size()){
        return 0;
    }

    return v[i] + array_sum_from_i(v,i+1);
}

int array_sum(const vector<int> &v,int i){
    return array_sum_from_i(v,0);
}

int main() {
    vector<int> v={1,2,3,4,5};
    cout << array_sum(v,0) << endl;
}