#include <iostream>
#include <vector>

using namespace std;

vector<string> punch(vector<string> &v, vector<string>::iterator it, int k) {
    vector<string> nv;
    int index = it - v.begin();
    for (int i = 0; i < v.size(); i++)
        if (!(index - k <= i && i <= index + k)) nv.push_back(v[i]);
    return nv;
}
int main() {
    int n, j, k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
        cout << x << endl;
    }
}

/*
5 1 1
AA
BB
CC
DD
EE
7 6 3
AA
BB
CC
DD
EE
FF
GG
*/