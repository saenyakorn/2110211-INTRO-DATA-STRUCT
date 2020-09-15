#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false), cin.tie(0);
    int N, M, K, P;
    cin >> N >> M >> K;
    vector<int> V;
    V.resize(N);
    for (int i = 0; i < N; i++) cin >> V[i];
    sort(V.begin(), V.end());
    while (M--) {
        cin >> P;
        cout << upper_bound(V.begin(), V.end(), P + K) - lower_bound(V.begin(), V.end(), P - K) << " ";
    }
}

/*
5 5 1
1 3 5 9 10
1 2 3 7 20

3 5 1000000
1000000 1 2000001
1000000 1000001 1 2 3

3 5 0
4 8 2
1 2 3 4 5
*/