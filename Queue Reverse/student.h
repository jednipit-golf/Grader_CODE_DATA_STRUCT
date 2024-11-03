#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  int ai = (mFront + a)%mCap;
  int bi = (mFront + b)%mCap;
  for(int i = 0;i< (b-a+1)/2;i++){
    std::swap(mData[ai],mData[bi]);
    ai = (ai + 1) % mCap;
    bi = (bi + mCap - 1) % mCap;
  }
}

#endif
