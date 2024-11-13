#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int pos = position-mData;
  ensureCapacity(mSize+(last-first));
  int insize = last-first;
  for(int i = mSize; i >= pos; i-- ){
    mData[i + insize] = mData[i];
  }
  for(int i = 0 ; i< insize; i++){
    mData[pos  + i] = first[i];
  }
  mSize += insize;
}

#endif
