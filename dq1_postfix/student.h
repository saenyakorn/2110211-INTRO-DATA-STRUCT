#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <stack>
#include <utility>
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int, int> > v) {
    stack<int> stk;
    for (int i = 0; i < v.size(); i++) {
        pair<int, int> op = v[i];
        if (op.first == 0) {
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            if (op.second == 0)
                a += b;
            else if (op.second == 1)
                a -= b;
            else if (op.second == 2)
                a *= b;
            else if (op.second == 3)
                a /= b;
            stk.push(a);
        } else {
            stk.push(op.second);
        }
    }
    return stk.top();
}

#endif
