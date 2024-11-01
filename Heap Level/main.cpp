#include <algorithm>
#include <random>
#include <chrono>
#include <cassert>
#include <string>
#include "priority_queue.h"
#include "student.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main() {
 CP::priority_queue<int> pq;
 for (int i = 0;i < 10;i++) pq.push(i);
 vector<int> v1 = pq.at_level(2); // v1 = {7,6,4,1}
 vector<int> v2 = pq.at_level(3); // v2 = {3,2,0}
 vector<int> v3 = pq.at_level(20); // v3 = {}
 for(auto x:v1){
  cout << x << " ";
 }
}
