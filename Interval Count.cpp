#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,k;
    string ans = "";
    cin >> n >> m >> k;
    vector<int> vec1(n);
    vector<int> vec2(m);
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }
    sort(vec1.begin(), vec1.end()); 
    for (int i = 0; i < m; i++) {
        cin >> vec2[i];
    }
    int count = 0;
    for (int i = 0; i < m; i++) {
        int x = vec2[i];
        int low = x - k;
        int high = x + k;
        auto start = lower_bound(vec1.begin(), vec1.end(), low);
        auto end = upper_bound(vec1.begin(), vec1.end(), high);
        int count = distance(start, end);
        cout << count << " ";
    }
    cout << endl;
}

