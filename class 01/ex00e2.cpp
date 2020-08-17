#include <bits/stdc++.h>

#include <limits>

using namespace std;

int N, M, R;
int matrix[102][102];

int calculateMatrix(int r1, int c1, int r2, int c2) {
    int maximum = INT_MIN;
    for (int i = r1; i <= min(N, r2); i++)
        for (int j = c1; j <= min(M, c2); j++)
            maximum = max(maximum, matrix[i][j]);
    return maximum;
}

int main() {
    scanf("%d%d%d", &N, &M, &R);

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if (i == 0 || j == 0) {
                matrix[i][j] = INT_MIN;
            } else {
                scanf("%d", &matrix[i][j]);
            }
        }
    }

    for (int i = 0; i < R; i++) {
        int r1, c1, r2, c2;
        scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
        if (r1 > r2 || c1 > c2) {
            printf("INVALID\n");
        } else if (r1 > N || r2 <= 0 || c1 > M || c2 <= 0) {
            printf("OUTSIDE\n");
        } else {
            printf("%d\n", calculateMatrix(r1, c1, r2, c2));
        }
    }
}