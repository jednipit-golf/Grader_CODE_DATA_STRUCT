#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for(int i=0;i<mSize;i++){
    if(mData[i] == k){
      return 1;
    }
  }
  return 0;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  std::vector<int> a;
  for(int i=0;i<mSize;i++){
    if(mData[i] == k){
      a.push_back(i+1);
    }
  }
  if (!a.empty()){
    int high = a.back();
    high = log(high)/log(2);
    return high;
  }
  return -1;
}

#endif

