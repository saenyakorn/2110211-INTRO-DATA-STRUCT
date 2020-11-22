#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int mx = -1;
    string smx;
    map<string, int> m;
    while (n--) {
        string s;
        cin >> s;
        m[s] += 1;
        if (mx <= m[s]) {
            if (mx == m[s]) {
                smx = s.compare(smx) < 0 ? smx : s;
            } else {
                smx = s;
            }
            mx = m[s];
        }
    }
    cout << smx << " " << mx << endl;
}

/*
8
dog
zebra
dog
cat
cat
zebra
duck
duck
*/