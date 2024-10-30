#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    // Read vec1 pairs
    vector<pair<int, int>> vec1(n);
    for (int i = 0; i < n; i++) {
        cin >> vec1[i].first >> vec1[i].second;
    }

    // Sort vec1 based on the first value of the pair
    sort(vec1.begin(), vec1.end());

    // Read vec2 values
    vector<int> vec2(m);
    for (int i = 0; i < m; i++) {
        cin >> vec2[i];
    }

    for (auto c : vec2) {
        // Binary search for the first pair whose 'first' is greater than 'c'
        auto it = lower_bound(vec1.begin(), vec1.end(), make_pair(c+1, 0));

        // Check the previous pair (if exists) to see if it contains c
        bool found = (it != vec1.begin() && prev(it)->first <= c && c <= prev(it)->second);
        cout << (found ? "1 " : "0 ");
    }

    return 0;
}
