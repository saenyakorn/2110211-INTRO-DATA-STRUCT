#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n, m, t;
    scanf("%d%d", &n, &m);

    vector<int> a, b, c;
    while (n--) {
        scanf("%d", &t);
        a.push_back(t);
    }
    while (m--) {
        scanf("%d", &t);
        b.push_back(t);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j] && (c.empty() || c.back() != a[i]))
            c.push_back(a[i]);
        else if (a[i] < b[j])
            i++;
        else
            j++;
    }
    for (int i = 0; i < c.size(); i++) printf("%d ", c[i]);
}

/*
4 4
4 1 3 2
5 4 2 9

4 2
1 1 4 4 
1 1

3 5 
1 2 3
20 30 50 6 7

4 4 
2 2 3 3
3 2 2 3

2 2 
100 50
50 100
*/
