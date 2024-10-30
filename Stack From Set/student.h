#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  int cap = 0;
  for (auto ite = first; ite != last; ite++){
    cap++;
  }
  mData = new T[cap]();
  mCap = cap;
  mSize = cap;
  cap--;
  for (auto ite = first; ite != last; ite++){
   mData[cap] = *ite;
   cap--;
  }
}

#endif
