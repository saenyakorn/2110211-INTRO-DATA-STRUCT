#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <iostream>

#include "stack.h"

template <typename T>
size_t CP::stack<T>::size() const {
    //write your code here
    return this->v.size();
}

template <typename T>
const T& CP::stack<T>::top() const {
    //write your code here
    return this->v.back();
}

template <typename T>
void CP::stack<T>::push(const T& element) {
    //write your code here
    this->v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop() {
    //write your code here
    this->v.pop_back();
}

#endif
