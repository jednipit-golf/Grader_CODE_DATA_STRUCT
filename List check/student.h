#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  //your code here
  if(mHeader == NULL) return false;
  node* tmp = mHeader->next;
  if (tmp==NULL || tmp->prev!=mHeader) return false;
  for(int i=0;i<mSize;i++){
    if (tmp==mHeader || tmp==NULL || tmp->next==NULL) return false;
    if (tmp->next->prev==NULL || tmp->next->prev!=tmp) return false;
    tmp=tmp->next;
  }
  return tmp==mHeader;
}


#endif


