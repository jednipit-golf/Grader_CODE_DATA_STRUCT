#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>

#include "map_bst.h"

template <typename KeyT, 
          typename MappedT, 
          typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *n) {
  if (!n) return 0;
  return process(n->left) + process(n->right) + 1;
}

template <typename KeyT, 
          typename MappedT, 
          typename CompareT>
std::pair<KeyT, MappedT> CP::map_bst<KeyT, MappedT, CompareT>::subtree(
    map_bst<KeyT, MappedT, CompareT> &left,
    map_bst<KeyT, MappedT, CompareT> &right) {
  // write your code here
  if (empty()) return std::pair<KeyT, MappedT>();
  left.clear(); //left deleted
  right.clear(); //right deleted
  int left_size = process(mRoot->left); 
  int right_size = process(mRoot->right);
  if (mRoot->left) {
    std::swap(left.mRoot, this->mRoot->left);
    left.mRoot->parent = nullptr;
    left.mSize = left_size;
  }
  if (mRoot->right) {
    std::swap(right.mRoot, this->mRoot->right);
    right.mRoot->parent = nullptr;
    right.mSize = right_size;
  }
  this->mRoot->left = this->mRoot->right = nullptr;
  this->mSize = 1;
  return this->mRoot->data;
}

#endif

