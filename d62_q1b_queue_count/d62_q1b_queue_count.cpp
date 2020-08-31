#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;
size_t qcount(queue<int> q, int k) {
    int cnt = 0;
    while (!q.empty()) {
        cnt += q.front() == k;
        q.pop();
    }
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        q.push(a);
    }
    cout << qcount(q, k) << endl;
}

/*
5 10
1 
10 
1 
10
1
*/