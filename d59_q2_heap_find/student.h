#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>

#include <cmath>
#include <iostream>

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::find(T k) const {
    for (int i = 0; i < mSize; i++)
        if (mData[i] == k) return true;
    return false;
}

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::find_level(T k) const {
    int pos = 0;
    for (int i = mSize - 1; i >= 0; i--) {
        if (mData[i] == k) return floor(log2(i + 1));
    }
    return -1;
}

#endif
