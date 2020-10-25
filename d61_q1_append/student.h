#include "queue.h"
#include "stack.h"

namespace CP {
template <typename T>
void stack<T>::appendStack(stack<T> s) {
    int *data = new T[size() + s.size()];
    int index = 0;
    for (int i = 0; i < s.size(); i++) data[index++] = s.mData[i];
    for (int i = 0; i < size(); i++) data[index++] = mData[i];
    mSize = mCap = index;
    delete[] mData;
    mData = data;
}

template <typename T>
void stack<T>::appendQueue(queue<T> q) {
    int *data = new T[size() + q.size()];
    int index = 0;
    for (int i = q.size() - 1; i >= 0; i--) data[index++] = q.mData[(q.mFront + i) % q.mCap];
    for (int i = 0; i < size(); i++) data[index++] = mData[i];
    mSize = mCap = index;
    delete[] mData;
    mData = data;
}

template <typename T>
void queue<T>::appendStack(stack<T> s) {
    int *data = new T[size() + s.size()];
    int index = 0;
    for (int i = 0; i < size(); i++) data[index++] = mData[(mFront + i) % mCap];
    for (int i = s.size() - 1; i >= 0; i--) data[index++] = s.mData[i];
    mFront = 0;
    mSize = mCap = index;
    delete[] mData;
    mData = data;
}

template <typename T>
void queue<T>::appendQueue(queue<T> q) {
    int *data = new T[size() + q.size()];
    int index = 0;
    for (int i = 0; i < size(); i++) data[index++] = mData[(mFront + i) % mCap];
    for (int i = 0; i < q.size(); i++) data[index++] = q.mData[(q.mFront + i) % q.mCap];
    mFront = 0;
    mSize = mCap = index;
    delete[] mData;
    mData = data;
}
}  // namespace CP
