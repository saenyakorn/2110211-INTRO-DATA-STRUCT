#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
    T tmp = front();
    pop_front();
    push_back(tmp);
}

#endif
