#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b){
    size_t newSize = mSize + b - a + 1;
    a = (int)mSize - a - 1;
    b = (int)mSize - b - 1;
    if (newSize > mCap) expand(std::max(mCap * 2, newSize));
    int l = mSize - 1, r = newSize - 1;
    while (l > a) {
        mData[r--] = mData[l--];
    }
    while (l >= b) {
        mData[r--] = mData[l];
        mData[r--] = mData[l--];
    }
    mSize = newSize;
}

#endif