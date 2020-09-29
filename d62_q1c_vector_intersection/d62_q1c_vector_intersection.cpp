#include <algorithm>
#include <cstdio>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n, m, x;
    scanf("%d%d", &n, &m);
    map<int, int> m1;
    vector<int> b;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        m1[x] += 1;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        if (m1[x]) {
            b.push_back(x);
            m1[x] = 0;
        }
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < b.size(); i++) printf("%d ", b[i]);
}

/*
10 10
7 7 3 2 8 12 4 5 1 8
80 7 2 13 1 8 7 10 200 200
*/