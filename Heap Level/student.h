#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  size_t c=0,j = 0;
  while(k--){
    c = (c*2)+1;
    j = (j*2)+2;    
  }
  while(c<mSize && c<=j){
    r.push_back(mData[c++]);    
  }
  sort(r.begin(),r.end(),mLess);
  reverse(r.begin(),r.end());
  return r;
}

#endif

