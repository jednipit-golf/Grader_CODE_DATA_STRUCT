#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
    // Create a temporary vector to hold the reversed elements
    vector<int> t;
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
    // Iterate from a to b and store elements in temp
    for (auto it = a; it <= b; ++it) {
        t.push_back(*it);
    }
    
    // Place the elements back in reversed order
    auto it = b;
    for (auto &x : t) {
        *a++ = x;
        --it;
    }
}
int main() {
 //read input
    int n,a,b;
    cin >> n;
    vector<int> v;
        for (int i = 0;i < n;i++) {
        int c;
        cin >> c;
         v.push_back(c);
    }
    cin >> a >> b;
    //call function
    reverse(v,v.begin()+a,v.begin()+b+1);
    //display content of the vector
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}


/////////////////////////////////I D K but same as reverse 1 brh /////////////////////////////