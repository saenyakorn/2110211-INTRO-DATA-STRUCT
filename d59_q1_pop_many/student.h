#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
    //write your code here
    mSize = K < mSize ? mSize - K : 0;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
    //write your code here
    //
    std::stack<T> a;
    int sk = K < mSize ? K : mSize;
    for (int i = mSize - sk; i < mSize; i++)
        a.push(mData[i]);
    mSize = K < mSize ? mSize - K : 0;
    return a;
    //don't forget to return an std::stack
}

#endif
