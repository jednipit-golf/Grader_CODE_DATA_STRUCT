#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<bits/stdc++.h>
template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  int s = data.size();
  int c = 0;
  int z = mSize;
  sort(data.begin(),data.end());
  ensureCapacity(mSize+data.size());
  T *arr = new T[mSize+data.size()]();
  for(int i = 0;i<s+z;i++){
    if(i != data[c].first+c){
        arr[i] = mData[i-c];
    }else{
        arr[i] = data[c].second;
        c++;
    }
  } 
    delete [] mData;
    mData = arr;
    mSize = s+z;
    mCap = s+z;
}

#endif