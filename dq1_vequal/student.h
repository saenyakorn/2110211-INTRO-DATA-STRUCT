#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator==(const vector<T> &other) const {
    //write your code only in this function
    if (this->mSize != other.mSize) return false;
    for (int i = 0; i < other.size(); i++)
        if (other[i] != this->mData[i])
            return false;
    return true;
}

#endif
