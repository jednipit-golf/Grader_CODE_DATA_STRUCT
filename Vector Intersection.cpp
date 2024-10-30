// #include <iostream>
// #include <set>
// #include <vector>
// #include <utility>  
// #include <algorithm>

// using namespace std;
// int main(){
//     int n,m,c;
//     vector <int> a1,b1;
//     set<int> g;
//     cin >> n >> m;
//     for (auto i=0;i<n;i++){
//         cin >> c;
//         a1.push_back(c);
//     }
//     for (auto i=0;i<m;i++){
//         cin >> c;
//         b1.push_back(c);
//     }
//     set<int> a(a1.begin(),a1.end());
//     set<int> b(b1.begin(),b1.end());
//     for(auto x : a){
//     //cout << x << " ";
//     if(find(b.begin(),b.end(),x) != b.end()){
//         g.insert(x);
//         }
//     }
//     for(auto x:g){
//         cout << x << " ";
//     }
// }
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m;
    set<int> a, b;

    for (int i = 0; i < n; i++) {
        cin >> c;
        a.insert(c);
    }
    for (int i = 0; i < m; i++) {
        cin >> c;
        b.insert(c);
    }
    vector<int> intersection;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(intersection));
    for (auto& x : intersection) {
        cout << x << " ";
    }
    return 0;
}
