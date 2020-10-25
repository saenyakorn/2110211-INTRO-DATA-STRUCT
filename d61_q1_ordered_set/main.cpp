#include <iostream>

#include "student.h"
using namespace std;

void test1() {
    int arr1[] = {4, 6, 9, 0, 7};
    vector<int> v1(arr1, arr1 + 5);
    int arr2[] = {0, 3, 2, 4, 5};
    vector<int> v2(arr2, arr2 + 5);
    vector<int> v = Union(v1, v2);
    for (auto& x : v) {
        cout << x << " ";
    }
    cout << endl;
}

void test2() {
    int arr1[] = {3, 0, 9, 1, 6};
    vector<int> v1(arr1, arr1 + 5);
    int arr2[] = {4, 6, 9, 1, 7};
    vector<int> v2(arr2, arr2 + 5);
    vector<int> v = Intersect(v1, v2);
    for (auto& x : v) {
        cout << x << " ";
    }
    cout << endl;
}
int main() {
    test1();
    test2();
    return 0;
}
