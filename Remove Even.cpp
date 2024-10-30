#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v,int a,int b) {
    vector<int> t;
    for (auto i = a;i<=b;i ++){
        if( i %2 ==1){
            t.push_back(v[i]);
        }
    }
    for (auto i = a;i<=b;i++){
        v.erase(v.begin()+(a));
    }
    // for (auto &x : v) {
    //     cout << x << " ";
    // }
    // cout << endl;
    // for (auto &x : t) {
    //     cout << x << " ";
    // }
    // cout << endl;
    int z = t.size();
    for (auto i = 0;i < z;i++){
        v.insert(v.begin()+(a),t[z-(i+1)]);
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
    remove_even(v,a,b);
    //display content of the vector
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}