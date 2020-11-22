#include <iostream>
#include <list>

using namespace std;

void print(list<int> &ls) {
    for (list<int>::iterator p = ls.begin(); p != ls.end(); p++) {
        cout << *p << " ";
    }
    cout << endl;
}

bool detection(list<int> &ls, list<int>::iterator &it, int value) {
    int left = 0, right = 0;
    list<int>::iterator it_left = it, it_right = it;
    while (it_left != ls.end()) {
        if (*it_left == *it)
            left += 1;
        else
            break;
        it_left--;
    }
    while (it_right != ls.end()) {
        if (*it_right == *it)
            right += 1;
        else
            break;
        it_right++;
    }
    if (left + right - 1 >= 3) {
        while (--right) {
            it = ls.erase(it);
        }
        while (left--) {
            it = --ls.erase(it);
        }
        return true;
    }
    return false;
}

int main() {
    int N, K, V;
    cin >> N >> K >> V;
    list<int> ls;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        ls.push_back(tmp);
    }
    list<int>::iterator it = ls.begin();
    for (int i = 0; i < K; i++) it++;
    it = ls.insert(it, V);
    while (detection(ls, it, V)) {
    }
    print(ls);
}

/*
7 2 4
1 1 4 4 4 1 1

10 5 4
1 3 1 4 4 1 1 5 5 5
*/