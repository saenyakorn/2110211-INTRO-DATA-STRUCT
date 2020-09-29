#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    //write your code here
    CP::vector<T> temp;
    for (int i = 0, j = 0; i < this->size(); i++)
        if (j < pos.size() && i == pos[j])
            j++;
        else
            temp.push_back(this->at(i));
    this->clear();
    for (int i = 0; i < temp.size(); i++) {
        this->push_back(temp[i]);
    }
}

#endif
