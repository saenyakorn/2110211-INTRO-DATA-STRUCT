#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
void list_erase(vector<int> &v, vector<int> &pos) {
    //write your code here
    sort(pos.begin(), pos.end());
    int posIndex = 0;
    vector<int> newV;
    for (int i = 0; i < v.size(); i++) {
        if (posIndex < pos.size() && pos[posIndex] == i)
            posIndex++;
        else
            newV.push_back(v[i]);
    }
    v = newV;
}
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n), pos(m);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < m; i++) cin >> pos[i];
    list_erase(v, pos);
    cout << "After call list_erase" << endl
         << "Size = " << v.size() << endl;
    for (auto &x : v) cout << x << " ";
    cout << endl;
}

/*
10 3
0 10 20 30 40 50 60 70 80 90
3 0 9
*/