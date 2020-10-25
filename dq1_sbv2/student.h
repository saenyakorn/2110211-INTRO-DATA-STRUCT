#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <iostream>

#include "stack.h"

template <typename T>
size_t CP::stack<T>::size() const {
    return v.size();
}

template <typename T>
const T& CP::stack<T>::top() const {
    return v[size() - 1];
}

template <typename T>
void CP::stack<T>::push(const T& element) {
    v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop() {
    v.pop_back();
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
    depth = depth < (int)size() ? depth : (int)size();
    v.insert(v.begin() + size() - depth, element);
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T>& w) {
    for (int i = 0; i < w.size(); i++) push(w[i]);
}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
    while (size() > 0 && top() != e) pop();
}

#endif
