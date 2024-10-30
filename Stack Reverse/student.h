#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last){
	// write your code here
	last = std::min(last,mSize-1);
	size_t start = mSize-last-1;
	stack<T> tmp;
	if(first<last){
		for(int i=(int)last;i>=(int)first;i--){
			tmp.push(mData[mSize-i-1]);
		}
		while(!tmp.empty()){
			mData[start] = tmp.top();
			tmp.pop();
			start++;
		}
	}
}

#endif
