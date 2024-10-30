#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> vec1(n);
    vector<int> vec2(m);
    for (auto i=0;i<n;i++){
        cin >> vec1[i];
    }
    for (auto i=0;i<m;i++){
        cin >> vec2[i];
    }
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    vector<int> intersection;
    int i =0,j = 0;
    while(i<n && j<m){
        if (vec1[i] == vec2[j]){
            if(intersection.empty() || intersection.back() != vec1[i]){
                intersection.push_back(vec1[i]);
            }
            i++;
            j++;
        } else if (vec1[i] < vec2[j]){
            i++;
        } else if (vec1[i] > vec2[j]){
            j++;
        }
    }
    for (auto num : intersection) {
        cout << num << " ";
    }
}