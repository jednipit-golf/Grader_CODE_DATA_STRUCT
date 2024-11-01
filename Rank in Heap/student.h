#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  T tar = mData[pos];
  int c = 0
  for(size_t i=0;i<mSize;i++){
    if(mLess(tar,mData[i])) c++;
  }
  return c;
}

#endif
