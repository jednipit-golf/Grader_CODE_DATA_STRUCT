#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T>> op;
  size_t n = mSize/k;
  size_t m = mSize%k;
  size_t i = mSize-1;
  while(k--){
    std::vector<T> temp;
    if(m>0){
      temp.push_back(mData[i--]);
      m--;
    }
    for(size_t j = 0 ; j < n ; j++){
      temp.push_back(mData[i--]);
    }
    op.push_back(temp);
  }
  return op;
}
#endif
