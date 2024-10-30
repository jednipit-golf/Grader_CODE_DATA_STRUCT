#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  //should return something
  int a = mSize/k;
  int b = mSize%k;
  int c = mSize-1;
  std::vector<std::vector<T>> op;
  for(int i=0;i<k;i++){
    std::vector<T> tmp;
    for(int j=0;j<a;j++){
      tmp.push_back(mData[c-(j*k)]);
    }
    std::reverse(tmp.begin(), tmp.end());
    if(b>0){
      tmp.insert(tmp.begin(),mData[b-1]);
      b--;
    }
    c--;
    op.push_back(tmp);
  }
  return op;
}

#endif


