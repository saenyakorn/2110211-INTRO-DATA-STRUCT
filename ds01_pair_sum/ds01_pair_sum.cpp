#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int N, M, T;
    scanf("%d%d", &N, &M);
    vector<int> A;

    for (int i = 0; i < N; i++) {
        scanf("%d", &T);
        A.push_back(T);
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < M; i++) {
        scanf("%d", &T);
        bool b = false;
        for (int j = 0; j < N; j++) {
            if (binary_search(A.begin() + j + 1, A.end(), T - A[j])) {
                b = true;
                break;
            }
        }
        printf("%s\n", b ? "YES" : "NO");
    }
}