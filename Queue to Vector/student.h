#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  //
  if (k>mSize){
    k = mSize;
  }
  for(int i=0;i<k;i++){
    res.push_back(mData[(mFront+i)%mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  mSize = to-from;
  mData = new T[mSize];
  mCap = mSize;
  mFront = 0;
  for (size_t i = 0; i < mSize; i++) {
    mData[i] = *(from + i);
  }
}

#endif
