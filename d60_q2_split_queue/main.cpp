#include <iostream>
#include <vector>

#include "queue.h"
//
#include "student.h"

using namespace std;
int main() {
    CP::queue<int> q;
    int n, k;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        q.push(tmp);
    }
    cin >> k;

    vector<CP::queue<int> > qs = q.split_queue(k);
    for (int i = 0; i < k; i++) {
        cout << "qs[" << i << "] = ";
        qs[i].print();
        cout << endl;
    }
    cout << "q = ";
    q.print();
    cout << endl;
    return 0;
}

/* 
10
3 9 8 6 7 2 1 3 8 4
3

8
5 7 1 10 45 3 6 4
3
*/