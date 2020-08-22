#include <iostream>
#include <vector>

using namespace std;

void remove_even(vector<int> &v, int a, int b) {
    for (int i = b; i >= a; i--) {
        if (i % 2 == 0) {
            v.erase(v.begin() + i);
        }
    }
}

int main() {
    //read input
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    remove_even(v, a, b);
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}