#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
    std::vector<int> V;
    for(int i = 0;i<pos.size();i++) {
      if(pos[i] < mSize) {
        V.push_back(pos[i]);
      }
    }
    std::vector<T> V2;
    for(int i = 0;i<V.size();i++) {
      V2.push_back(mData[(mFront+V[i])%mCap]);
    }
    std::sort(V2.begin(),V2.end(),comp);
  return V2[0];
}

#endif