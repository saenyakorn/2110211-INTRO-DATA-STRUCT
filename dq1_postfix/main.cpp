#include <iostream>
#include <stack>
#include <vector>

using namespace std;

#include "student.h"

int main() {
    vector<pair<int, int> > v;
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    cout << eval_postfix(v) << endl;
}

/*
1
1 10

3
1 10 
1 15 
0 0

3
1 10
1 15
0 1

5
1 9
1 3 
0 3 
1 2
0 2

5
1 7
1 3 
0 3 
1 2
0 2

7
1 1
1 2 
1 3 
1 4 
0 0
0 0
0 0
*/