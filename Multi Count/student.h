#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T,size_t> m;
    for (size_t i = 0; i < mSize; i++) {
        m[mData[(mFront + i) % mCap]]++;
    }
    std::vector<std::pair<T,size_t>> v(k.size());
    for (size_t i = 0; i < k.size(); i++) {
        v[i] = {k[i], m[k[i]]};
    }
    return v;
}

#endif
