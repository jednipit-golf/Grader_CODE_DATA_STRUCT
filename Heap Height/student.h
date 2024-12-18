#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <cmath>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  int a = mSize;
  if(a==0){
    return -1;
  }else if (a ==1){
    return 0;
  }else{
    int check = log(a)/log(2);
    return check;
  }
}

#endif

