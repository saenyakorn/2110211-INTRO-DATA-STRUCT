#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last) {
    //write your code here
    CP::vector<T> temp;
    iterator it = begin();
    while (it < position) {
        temp.push_back(*it);
        it++;
    }
    while (first < last) {
        temp.push_back(*first);
        first++;
    }
    while (it < end()) {
        temp.push_back(*it);
        it++;
    }
    clear();
    for (int i = 0; i < temp.size(); i++) {
        push_back(temp[i]);
    }
}

#endif
