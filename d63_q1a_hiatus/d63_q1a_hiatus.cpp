#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> ii;

bool cmp(const ii &x, const ii &y) {
    if (x.first == y.first) return x.second < y.second;
    return x.first < y.first;
}

int main() {
    std::ios_base::sync_with_stdio(false), cin.tie(0);
    int N, M;
    cin >> N >> M;

    vector<ii> v;
    v.resize(N);
    for (int i = 0; i < N; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    while (M--) {
        int a, b;
        cin >> a >> b;
        int index = lower_bound(v.begin(), v.end(), ii(a, b), cmp) - v.begin();
        if (a == v[index].first && b == v[index].second)
            cout << "0 0 ";
        else if (index == 0)
            cout << "-1 -1 ";
        else
            cout << v[index - 1].first << " " << v[index - 1].second << " ";
    }
}