#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <functional> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    vector<int> a = {2,6,9,7,33,1,56,9};
    sort(a.rbegin(),a.rend(),std::greater<int>());
    for(auto &x:a){
        cout << x << " ";
    }
}