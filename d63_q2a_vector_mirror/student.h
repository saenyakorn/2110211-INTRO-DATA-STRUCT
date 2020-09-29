#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
    int size = mSize;
    ensureCapacity(mSize * 2);
    for (int i = 0; i < size; i++)
        mData[size + i] = mData[size - i - 1];
    mSize += size;
}

#endif
