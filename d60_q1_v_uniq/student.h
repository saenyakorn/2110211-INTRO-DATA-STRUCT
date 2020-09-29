#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <map>

template <typename T>
void CP::vector<T>::uniq() {
    //do someting here
    std::map<T, int> m;
    CP::vector<T> temp;
    for (int i = 0; i < mSize; i++) {
        if (!m[mData[i]])
            temp.push_back(mData[i]);
        m[mData[i]] = 1;
    }
    clear();
    for (int i = 0; i < temp.size(); i++)
        push_back(temp[i]);
}

#endif
