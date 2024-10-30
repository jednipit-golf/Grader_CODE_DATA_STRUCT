#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> vec;
    int n,z;
    cin >> n;
    for (int i = 0;i < n;i++) {
        int c;
        string order;
        cin >> order;
        if (order == "pb"){
            cin >> c;
            vec.push_back(c);
        } else if (order == "sa") {
            sort(vec.begin(),vec.end());
        } else if (order == "sd") {
            sort(vec.begin(),vec.end(),greater<int>());
        } else if (order == "r") {
            reverse(vec.begin(), vec.end());
        } else if (order == "d") {
            int index;
            cin >> index;
            z = vec.size();
            if (index >= 0 && index < z) {
                vec.erase(vec.begin() + index);
            }
        } 
    }
    for (auto &x : vec) {
        cout << x << " ";
    }
}

        












