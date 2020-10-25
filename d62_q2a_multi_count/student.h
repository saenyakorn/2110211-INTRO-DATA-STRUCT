#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T, size_t> > CP::queue<T>::count_multi(std::vector<T> &k) const {
    std::vector<std::pair<T, size_t> > v;
    std::map<T, size_t> m;
    for (int i = 0; i < mSize; i++) m[mData[i]] += 1;
    for (int i = 0; i < k.size(); i++) {
        if (m.find(k[i]) == m.end())
            v.push_back(std::pair<T, size_t>(k[i], 0));
        else
            v.push_back(std::pair<T, size_t>(k[i], m[k[i]]));
    }
    return v;
}

#endif
