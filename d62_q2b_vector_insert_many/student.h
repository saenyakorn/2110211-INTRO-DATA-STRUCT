#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T> > data) {
    std::sort(data.begin(), data.end());
    ensureCapacity(mSize + data.size());
    T* new_mData = new T[mSize + data.size()];
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < mSize; i++) {
        if (i == data[j].first) new_mData[k++] = data[j++].second;
        new_mData[k++] = mData[i];
    }
    while (j < data.size()) new_mData[k++] = data[j++].second;
    delete[] mData;
    mData = new_mData;
    mSize = k;
}

#endif
