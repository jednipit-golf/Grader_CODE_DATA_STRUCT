#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
    std::vector<CP::queue<T> > qs(k);
    // code here  
    int m = mSize/k;  
    int r = mSize%k;
    for(int i=0;i<k;i++){
        CP::queue<T> tmp;
        int elementinthisqueue = m + (i < r ? 1 : 0);
        for(int j=0;j<elementinthisqueue;j++){
            tmp.push(mData[(mFront + ((j * k) + i)) % mCap]);
        }
        qs[i] = tmp;
    }
    while (!this->empty()) pop();
    return qs;
}

#endif

