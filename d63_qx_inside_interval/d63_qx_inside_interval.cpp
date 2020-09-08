#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

typedef pair<int, int> ii;

bool cmp(const ii &a, const ii &b) {
    return a.first < b.first;
}

int main() {
    int N, M;
    scanf("%d%d", &N, &M);

    int a, b;
    vector<ii> v;
    while (N--) {
        scanf("%d%d", &a, &b);
        v.push_back(ii(a, b));
    }
    sort(v.begin(), v.end());

    int q;
    while (M--) {
        scanf("%d", &q);
        int index = lower_bound(v.begin(), v.end(), ii(q, 0), cmp) - v.begin();
        bool c1 = v[index].first <= q && q <= v[index].second;
        bool c2 = index > 0 ? v[index - 1].first <= q && q <= v[index - 1].second : 0;
        printf("%d ", c1 | c2);
    }
}

/*
3 5
10 20
5 7
2 2
5 1 2 100000 20

3 8
2 4
10 20
6 6
1 2 3 5 6 9 22 11
*/