#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int my_reserve = mCap - mSize;
    int other_reserve = other.mCap - other.mSize;
    if (my_reserve < other_reserve) return-1;
    else if (my_reserve > other_reserve) return 1;
    else return 0;
}

#endif
