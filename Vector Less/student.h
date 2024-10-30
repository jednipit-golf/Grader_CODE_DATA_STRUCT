#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  if (mSize == 0 and other.mSize >= 1) return true;
  if (mSize >= 1 and other.size() >= 1 and mData[0] < other.mData[0]) return true;
  if (mSize >= 1 and other.size() >= 1 and mData[0] == other.mData[0]){
    if (mSize >other.size()){
      return false;
    }else if (mSize < other.size()){
      return true;
    }else{
      for (int i = 1; i < mSize; i++) {
        if (mData[i] < other[i]) {
          return true;
        }
      }
    }
  }
  return false;
}

#endif
