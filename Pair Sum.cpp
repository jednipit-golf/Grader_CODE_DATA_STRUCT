#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    
    // Read sizes of the two arrays
    cin >> n >> m;
    
    vector<int> a(n), b(m);
    
    // Input elements of the first array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Input elements of the second array
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    // Sort the array `a` to apply two-pointer technique
    sort(a.begin(), a.end());
    
    // Check for each element in `b` if there exists two elements in `a` whose sum equals it
    for (int k = 0; k < m; k++) {
        int target = b[k];
        bool found = false;
        int left = 0, right = n - 1;
        
        // Use two-pointer technique
        while (left < right) {
            int sum = a[left] + a[right];
            if (sum == target) {
                found = true;
                break;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
