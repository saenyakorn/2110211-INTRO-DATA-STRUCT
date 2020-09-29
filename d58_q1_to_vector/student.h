#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
    std::vector<T> res;
    //write your code only here
    k = this->mSize < k ? this->mSize : k;
    for (int i = 0; i < k; i++) {
        res.push_back(this->mData[this->mFront + i]);
    }
    //
    return res;
}

template <typename T>
CP::queue<T>::queue(iterator from, iterator to) {
    //write your code only here
    this->mCap = to - from;
    this->mData = new T[mCap]();
    this->mSize = to - from;
    this->mFront = 0;
    for (int i = 0; from < to; i++, from++) {
        this->mData[i] = *from;
    }
}

#endif
