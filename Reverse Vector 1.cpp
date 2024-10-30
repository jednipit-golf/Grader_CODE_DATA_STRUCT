#include <iostream>
#include <vector>

using namespace std;
void reverse(vector<int> &v,int a,int b) {
    vector<int> t;
    int z = 0;
    for(auto i = a;i<=b;i++){
        t.insert( t.begin(), v[i]);
    }
    for(auto i = a;i<=b;i++){
        v[i] = t[z];
        z++;
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
    reverse(v,a,b);
    //display content of the vector
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}