#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int n,m;
    cin >> n >> m;

    string ans;
    ans.reserve(m * 2);

    vector<pair<int,int>> vec1(n);
    for (int i = 0; i < n; i++) {
        cin >> vec1[i].first >> vec1[i].second;
    }
    sort(vec1.begin(),vec1.end());
    vector<pair<int,int>> vec2(m);
    for (int i = 0; i < m; i++) {
        cin >> vec2[i].first >> vec2[i].second;
    }
    for(const auto&a :vec2){
        auto it = lower_bound(vec1.begin(), vec1.end(), make_pair(a.first,a.second));
        if (it != vec1.end() && (it->first == a.first  && it->second == a.second)){
            ans += "0 0 ";
        } else if (it != vec1.begin()){
            auto prev_it = prev(it);
            ans += to_string(prev_it->first) + " " + to_string(prev_it->second) + " ";
        } else {
            ans += "-1 -1 ";
        }
    }
    
    if (!ans.empty() && ans.back() == ' ') {
        ans.pop_back();
    }
    cout << ans << endl;
}

