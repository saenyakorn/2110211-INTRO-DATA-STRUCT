#include <iostream>
#include <stack>
#include <vector>

using namespace std;
void stack_concat(stack<int> &s1, stack<int> &s2) {
    stack<int> rev;
    while (!s1.empty()) {
        rev.push(s1.top());
        s1.pop();
    }
    while (!rev.empty()) {
        s2.push(rev.top());
        rev.pop();
    }
    swap(s1, s2);
}
int main() {
    int n, m;
    int c;
    cin >> n >> m;
    stack<int> s1, s2;
    for (int i = 0; i < n; i++) {
        cin >> c;
        s1.push(c);
    }
    for (int i = 0; i < m; i++) {
        cin >> c;
        s2.push(c);
    }
    stack_concat(s1, s2);
    cout << "S1 has " << s1.size() << endl;
    while (!s1.empty()) {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
    cout << "S2 has " << s2.size() << endl;
    while (!s2.empty()) {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;
}

/*
4 3
40 30 20 10 
3 2 1
*/