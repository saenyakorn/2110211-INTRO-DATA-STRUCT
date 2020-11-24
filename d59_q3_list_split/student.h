#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it, size_t pos) {
    CP::list<T> result;
    if (it == end()) return result;
    node* beforeIt = it.ptr->prev;
    node* lastNode = end().ptr->prev;
    result.mHeader->next = it.ptr;
    it.ptr->prev = result.mHeader;
    lastNode->next = result.end().ptr;
    result.end().ptr->prev = lastNode;
    result.mSize = mSize - pos;
    mHeader->prev = beforeIt;
    beforeIt->next = mHeader;
    mSize = pos;
    return result;
}

#endif
