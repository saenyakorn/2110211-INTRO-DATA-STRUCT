#include <cstdio>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    ll N, M;
    scanf("%lld%lld", &N, &M);

    int count = 1;
    map<ll, ll> SonToFath;
    for (int i = 0; i < N; i++) {
        ll F, S;
        scanf("%lld%lld", &F, &S);
        SonToFath[S] = F;
    }

    for (int i = 0; i < M; i++) {
        ll A, B;
        scanf("%lld%lld", &A, &B);
        ll GA, GB;
        GA = SonToFath[SonToFath[A]];
        GB = SonToFath[SonToFath[B]];
        printf("%s\n", GA == GB && GA != 0 && GB != 0 && A != B ? "YES" : "NO");
    }
}

/*
5 4 
1 2
1 3
2 20
3 30
2 21
1 2
2 30
30 20
20 20

3 2
1110001110001 1110001110002
1110001110001 1110001110003
1110001110003 1110001110009
1334 22 
18273625162 283
*/