#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  if(a==b){
    return a;
  }
  auto tmp = a ;
  while(a != b){
    b--;
    if (a == b) break;
    std::swap(*a,*b);
    a++;
  }
  return tmp;
}

#endif
