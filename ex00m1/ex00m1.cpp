#include <cstdio>
#include <queue>
#include <vector>

using namespace std;
typedef pair<int, int> ii;

int main() {
    int N, M;
    scanf("%d%d", &N, &M);

    vector<int> chef(N);
    priority_queue<ii, vector<ii>, greater<ii> > PQ;
    for (int i = 0; i < N; i++) {
        scanf("%d", &chef[i]);
        PQ.push(ii(0, i));
    }

    while (M-- > 0) {
        ii customer = PQ.top();
        PQ.pop();
        int Stime = customer.first + chef[customer.second];
        PQ.push(ii(Stime, customer.second));
        printf("%d\n", customer.first);
    }
}

/*
3 10
1 3 4
*/