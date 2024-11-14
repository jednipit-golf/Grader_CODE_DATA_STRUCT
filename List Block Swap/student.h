#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "list.h"

template <typename T>
void CP::list<T>::block_swap(iterator a1, iterator a2, iterator b1, iterator b2) {
	// write your code here
	if (a1.ptr == a2.ptr && a1.ptr == b1.ptr) {
		return;
	}
	if (a1.ptr == a2.ptr && b1.ptr == b2.ptr) {
		return;
	}
	node *s1 = a1.ptr->prev;
	node *e1 = a2.ptr->prev;
	node *s2 = b1.ptr->prev;
	node *e2 = b2.ptr->prev;
	if (a2.ptr != b1.ptr && b2.ptr != a1.ptr) {
		if (b1.ptr != b2.ptr) {
			s1->next = b1.ptr;
			b1.ptr->prev = s1;

			e2->next = a2.ptr;
			a2.ptr->prev = e2;
		}
		else if (b1.ptr == b2.ptr){
			s1->next = a2.ptr;
			a2.ptr->prev = s1;
		}
		if (a1.ptr != a2.ptr) {
			s2->next = a1.ptr;
			a1.ptr->prev = s2;

			e1->next = b2.ptr;
			b2.ptr->prev = e1;
		}
		else if (a1.ptr == a2.ptr){
			s2->next = b2.ptr;
			b2.ptr->prev = s2;
		}
	}
	else if (a2.ptr == b1.ptr) {
		s1->next = b1.ptr;
		b1.ptr->prev = s1;

		s2->next = b2.ptr;
		b2.ptr->prev = s2;

		e2->next = a1.ptr;
		a1.ptr->prev = e2;
		
	}
	else {
		s2->next = a1.ptr;
		a1.ptr->prev = s2;

		s1->next = a2.ptr;
		a2.ptr->prev = s1;

		e1->next = b1.ptr;
		b1.ptr->prev = e1;
		
	}
	
}

#endif
