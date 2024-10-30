#ifndef __STUDENT_H_
#define __STUDENT_H_

//can include anything
#include <vector>
#include <algorithm>

template <typename T>
template <typename CompareT>
void CP::vector<T>::partial_sort(std::vector<iterator> &pos, CompareT comp) {
  // Write code here
  std::sort(pos.begin(), pos.end());
  std::vector<T> tmp;

  for (auto &it: pos) {
    tmp.push_back(*it);
  }

  std::sort(tmp.begin(), tmp.end(), comp);

  int idx = 0;
  for (auto &it: pos) {
    *it = tmp[idx++];
  }
}

#endif
