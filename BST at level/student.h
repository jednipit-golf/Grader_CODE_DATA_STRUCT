#ifndef __STUDENT_H_
#define __STUDENT_H_

#pragma GCC optimize("O3")

#include <algorithm>
#include <iostream>
#include "map_bst.h"

// you can modify and use this function
template <typename KeyT, typename MappedT, typename CompareT>
void CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node *n, size_t level, size_t tmp, std::vector<KeyT> &v) {
    // you MAY need to use this function
    if (!n) return;
    if (tmp == level) {
        v.push_back(n->data.first);
        return ;
    }
    my_recur(n->right, level, tmp + 1, v);
    my_recur(n->left, level, tmp + 1, v);
}

template <typename KeyT, typename MappedT, typename CompareT>
std::vector<KeyT> CP::map_bst<KeyT, MappedT, CompareT>::at_level(size_t level) {
    // write your code here
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::vector<KeyT> v;
    my_recur(mRoot, level, 0, v);
    return v;
}

#endif