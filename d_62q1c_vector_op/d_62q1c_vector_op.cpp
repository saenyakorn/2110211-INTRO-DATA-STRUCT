#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    string cmd;
    int value;
    vector<int> v;
    while (n--) {
        cin >> cmd;
        if (cmd == "pb") {
            cin >> value;
            v.push_back(value);
        } else if (cmd == "sa")
            sort(v.begin(), v.end());
        else if (cmd == "sd") {
            sort(v.begin(), v.end());
            reverse(v.begin(), v.end());
        } else if (cmd == "r")
            reverse(v.begin(), v.end());
        else if (cmd == "d") {
            cin >> value;
            if (value < v.size())
                v.erase(v.begin() + value);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

/*
10
pb 5
pb 4
pb 3
pb 2
pb 1
sa
d 2
d 2
sd
r
*/