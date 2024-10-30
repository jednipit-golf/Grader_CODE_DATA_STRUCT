#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>
using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  stack<int> num;
  for(const auto& x:v){
    if (x.first == 1){
      num.push(x.second);
    } else if (x.first == 0) {
      vector<int> vec2;
      int b = num.top();
      num.pop();
      int a = num.top();
      num.pop();
      if (x.second == 0){
        num.push(a+b);
      }else if (x.second == 1){
        num.push(a-b);
      }else if (x.second == 2){
        num.push(a*b);
      }else if (x.second == 3){
        num.push(a/b);
      }
    }
  }
  return num.top();
}

#endif
