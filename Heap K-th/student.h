#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  std::vector< T > srt;
  for(int i=0;i<7;i++)  if(i<mSize) srt.push_back(mData[i]);
  sort(srt.begin(),srt.end(),mLess);
  return srt[srt.size()-k];
}

#endif