#include <cstdio>
#include <set>

using namespace std;

int main() {
    int n, m, t;
    scanf("%d", &n);
    t = n;
    set<int> S;
    while (t--) {
        scanf("%d", &m);
        if (S.find(m) != S.end() || (m < 1 || m > n))
            return !printf("NO\n");
        S.insert(m);
    }
    return !printf("YES\n");
}