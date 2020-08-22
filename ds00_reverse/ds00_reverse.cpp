#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v, int a, int b) {
    vector<int>::iterator start = v.begin() + a;
    vector<int>::iterator middle = v.begin() + (a + b) / 2 + (a + b) % 2;
    vector<int>::iterator end = v.begin() + b;
    for (; start != middle; start++, end--) {
        swap(*start, *end);
    }
}

int main() {
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }

    cin >> a >> b;
    reverse(v, a, b);

    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}