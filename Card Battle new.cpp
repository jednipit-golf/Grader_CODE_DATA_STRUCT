#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m,a;
    cin >> n >> m;
    map<int,int> map1;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        cin >> a;
        map1[a]++;
    }
    
    bool lose = false;
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        vector<int> vec2(k);
        for (int i = 0; i < k; i++) {
            cin >> vec2[i];
        }
        for (const auto x:vec2){
            for(auto it1 = map1.begin(); it1 != map1.end();){
                if (it1->second == 0) {
                    it1 = map1.erase(it1);
                } else{
                    it1++;
                }
            }
            auto it = map1.upper_bound(x);
            if(it == map1.end()){   
                ans.push_back(i+1);
                lose = true;
                break;
            } else {
                it->second--;
            }

        }
    }
    if(!lose){
        cout << m+1;
    }else{
        auto s = min_element(ans.begin(),ans.end());
        cout << *s;
    }
}

