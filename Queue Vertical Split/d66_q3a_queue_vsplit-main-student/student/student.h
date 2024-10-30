#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const {
  // your code here
  output.resize(k);
  int n = mSize/k;
  int ss = mSize%k;
  int idx=0; 
  for(int i=0;i!=(int)k;i++){
    int size = (i<ss)?(n):(n+1);
    for(int j=0;j!=size;j++){
      output[i].push(mData[(mFront+idx)]);
      idx++;
    }
  }
}

#endif

