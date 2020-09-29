#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
T CP::queue<T>::operator[](int idx) {
    //write something here
    //
    // you need to return something
    idx = idx < 0 ? mSize + idx : idx;
    return mData[(idx + mFront) % mCap];
}

#endif

/*
a 1
a 2
a 3
a 4
a 5
p
d
d
p
q

a 10
a 20
a 30
a 40
a 50
p
k 0
k 1
k -1
d
d
p
k 0
k 1
k -1
q
*/