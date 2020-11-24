#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
    int range = 0;
    iterator aa = a, bb = b;
    for (; aa != bb; aa++) range++;
    aa = a;
    bb = --b;
    for (int i = 0; i < range / 2; i++, aa++, bb--) {
        std::swap(aa.ptr->data, bb.ptr->data);
    }
    return a;
}

#endif
