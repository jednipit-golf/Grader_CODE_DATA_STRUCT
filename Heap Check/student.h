#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  // Return something
  if(mSize<=1) return true;
  int idx;
  for(int i=1; i<mSize; i++){
    idx = (i-1)/2; // parent
    if(mLess(mData[idx],mData[i])) return false;
  }
  return true;
}

#endif