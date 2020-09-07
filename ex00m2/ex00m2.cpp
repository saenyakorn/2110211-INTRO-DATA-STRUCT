#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;
typedef pair<int, int> ii;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M, A;
    cin >> N >> M >> A;

    int K[N + 1];
    for (int i = 1; i <= N; i++) cin >> K[i];

    vector<map<int, int> > table(N + 1);
    vector<vector<int> > users(M + 1);

    char CMD;
    int U, I, V;
    while (A--) {
        cin >> CMD >> U >> I;
        if (CMD == 'B') {
            cin >> V;
            table[I][U] = V;
        } else if (CMD == 'W') {
            table[I].erase(U);
        }
    }

    for (int i = 1; i <= N; i++) {
        priority_queue<ii> pq;
        for (map<int, int>::iterator itr = table[i].begin(); itr != table[i].end(); itr++)
            pq.push(ii(itr->second, itr->first));
        while (!pq.empty() && K[i]--) {
            ii temp = pq.top();
            pq.pop();
            users[temp.second].push_back(i);
        }
    }

    for (int i = 1; i <= M; i++) {
        if (users[i].empty())
            cout << "NONE\n";
        else {
            for (int j = 0; j < users[i].size(); j++)
                cout << users[i][j] << " ";
            cout << endl;
        }
    }
}

/*
2 3 4
1 1
B 1 1 10
B 2 1 100
B 1 2 99
B 2 2 100

2 3 5
1 1
B 1 1 10
B 2 1 100
B 1 2 99
B 2 2 100
B 2 2 98

2 3 2
1 1
B 1 1 100
B 2 1 100

2 3 5
1 1
B 1 1 10
B 2 1 100
W 1 1
B 2 2 100
B 2 2 98

2 3 3
2 1
B 1 1 10
B 2 1 100
B 2 2 1
*/
