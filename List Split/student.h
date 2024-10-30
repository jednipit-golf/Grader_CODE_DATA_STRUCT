#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
    //iterator H = result.end();
    result.mHeader->next = it.ptr;
    result.mHeader->prev = mHeader->prev;
    iterator tmp = it.ptr->prev;
    it.ptr->prev = result.mHeader;
    mHeader->prev->next = result.mHeader;

    mHeader->prev = tmp.ptr;
    tmp.ptr->next = mHeader;
    result.mSize = mSize-pos;
    mSize -= result.mSize;
  return result;
}

#endif