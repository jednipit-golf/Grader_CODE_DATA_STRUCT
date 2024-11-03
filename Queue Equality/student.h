#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
  //write your code here
  //
  // YOU CANNOT CALL push or pop
  if(mSize == other.mSize){
    for(int i=0;i<mSize;i++){
      auto a = mData[(mFront+i)%mCap];
      auto b = other.mData[(other.mFront+i)%other.mCap];
      if(a!=b) return false;
    }
    return true;
  }
  return false;
}

#endif
