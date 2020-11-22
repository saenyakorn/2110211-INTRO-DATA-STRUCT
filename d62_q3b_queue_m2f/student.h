#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    T *nData = new T[mSize];
    nData[0] = mData[(pos + mFront) % mCap];
    for (size_t i = 0, j = 1; i < mSize && j < mSize; i++)
        if ((i + mFront) % mCap != (pos + mFront) % mCap) nData[j++] = mData[(i + mFront) % mCap];
    mFront = 0;
    mCap = mSize;
    delete[] mData;
    mData = nData;
}

#endif
