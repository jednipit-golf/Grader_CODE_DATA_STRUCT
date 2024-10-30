#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

// void member_multiply(vector<int> &v, vector<pair<vector<int>::iterator, int>> &multiply) {
//     vector<int> new_v;
//     for (auto it = v.begin();it != v.end();it++){
//         bool found = false;
//         for (auto &mul : multiply) {
//             if (it == mul.first) {
//                 for(int i=0;i<mul.second+1;i++){
//                     new_v.push_back(*it);
//                 }
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             new_v.push_back(*it);
//         }
//     }
//     v = move(new_v);
// }

void member_multiply(vector<int> &v, vector<pair<vector<int>::iterator, int>> &multiply) {
    // Create a hash map to store multipliers for quick lookup
    map<vector<int>::iterator, int> multiplier_map;
    for (const auto &mul : multiply) {
        multiplier_map[mul.first] = mul.second;
    }

    // Create a new vector to store the result
    vector<int> new_v;
    new_v.reserve(v.size() * 2); // Reserve space to avoid multiple allocations

    // Iterate through the original vector and apply multipliers
    for (auto it = v.begin(); it != v.end(); ++it) {
        auto map_it = multiplier_map.find(it);
        if (map_it != multiplier_map.end()) {
            // If multiplier found, add the value multiple times
            int count = map_it->second + 1;
            new_v.insert(new_v.end(), count, *it);
        } else {
            // Otherwise, just add the value once
            new_v.push_back(*it);
        }
    }

    // Replace the old vector with the new one
    v = move(new_v);
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator,int>> multiply(m);
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) {
        int a,b;
        cin >> a >> b;
        multiply[i].first = v.begin()+a;
        multiply[i].second = b;
    }
    member_multiply(v,multiply);

    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}