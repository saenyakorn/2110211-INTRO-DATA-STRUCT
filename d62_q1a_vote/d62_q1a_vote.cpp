#include <iostream>
#include <map>
#include <queue>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;
    string name;
    map<string, int> m;
    priority_queue<int> pq;
    while (N--) {
        cin >> name;
        m[name] += 1;
    }
    for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) pq.push(it->second);

    int mn = pq.top();
    while (K--) {
        int top = pq.top();
        pq.pop();
        if (top > 0) mn = top;
    }
    cout << mn << "\n";
}

/*
8 2 
somchai
adisak
somchai
yingyos
somchai
adisak
direk
yingyos
*/