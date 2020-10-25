#include <algorithm>
#include <map>
#include <vector>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v = A;
    map<T, int> m;
    for (int i = 0; i < v.size(); i++) m[v[i]] += 1;
    for (int i = 0; i < B.size(); i++) {
        if (m.find(B[i]) == m.end()) v.push_back(B[i]);
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    map<T, int> mb;
    for (int i = 0; i < B.size(); i++) mb[B[i]] += 1;
    for (int i = 0; i < A.size(); i++) {
        if (mb.find(A[i]) != mb.end()) v.push_back(A[i]);
    }
    return v;
}
