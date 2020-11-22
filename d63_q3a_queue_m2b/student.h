#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
    int value = mData[(mFront+pos)%mCap];
    for(int i=pos;i<mSize-1;i++) {
        int curr = (mFront+i)%mCap;
        int next = (mFront+i+1)%mCap;
        mData[curr] = mData[next];
    }
    mData[(mFront+mSize-1)%mCap] = value;
}

#endif