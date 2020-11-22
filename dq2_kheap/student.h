#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

#include "priority_queue.h"

template <typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixUp(size_t idx) {
    int parent = (idx - 1) / 4;
    if (idx > 0 && mLess(mData[parent], mData[idx])) {
        std::swap(mData[parent], mData[idx]);
        fixUp(parent);
    }
}

template <typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixDown(size_t idx) {
    int c;
    while ((c = 4 * idx + 1) < mSize) {
        int max = mData[c], maxPos = c;
        for (int i = 1; i < 4; i++)
            if (c + i < mSize && mLess(max, mData[c + i])) max = mData[c + i], maxPos = c + i;
        if (mLess(mData[maxPos], mData[idx])) break;
        std::swap(mData[maxPos], mData[idx]);
        idx = maxPos;
    }
}

#endif
