#include <iostream>
#include <stdexcept>
#include <vector>

#include "vector.h"
//
#include "student.h"

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    CP::vector<int> v;
    CP::vector<std::pair<int, int> > data;
    std::cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::cin >> m;
    data.resize(m);
    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        data[i].first = a;
        data[i].second = b;
    }

    v.insert_many(data);
    for (auto &x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

/*
6
1 2 3 4 5 6
3
0 10
6 11
2 12
*/