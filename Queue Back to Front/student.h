#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  //write your code here
  if(empty()) return;
  mData[(mFront-1)%mCap] = back();
  mFront = (mFront-1)%mCap;
} 

#endif
