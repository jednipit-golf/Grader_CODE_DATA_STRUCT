#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  for(auto it=a; it!=b;){
    if(*it == value){
        auto temp = it.ptr->next;
        //delete
        it.ptr->prev->next = it.ptr->next;
        it.ptr->next->prev = it.ptr->prev;
        //insert new
        it.ptr->prev = output.mHeader;
        it.ptr->next = output.mHeader->next;
        output.mHeader->next->prev = it.ptr;
        output.mHeader->next = it.ptr;
        //std::cout << "inserting : " << output.mHeader->next->data << " to list \n";

        mSize--;
        output.mSize++;
        it = temp;
        //std::cout << "current output : \n";
        //for(auto i : output) std::cout << i << " ";
        //std::cout << "\n";
    }else it++;
  }

}

#endif
