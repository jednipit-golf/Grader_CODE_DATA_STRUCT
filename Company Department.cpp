#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m,t;
    string a,b;
    map<string,set<string>> mp;
    cin >> n >> m;
    while(n--){
        cin >> a >> b;
        mp[b].insert(a);
    }
    while(m--){
        cin >> t;
        if(t==1){
            cin >> a >> b;
            for(auto x:mp){
                if(mp[x.first].count(a)){
                    mp[x.first].erase(a);
                }
                mp[b].insert(a);
            }
        }
        if(t==2){
            cin >> a >> b;
            for (auto x: mp[a]) {
                mp[b].insert(x);
            }
            mp.erase(a);
        }
    } 
    for (auto x: mp) {
        cout << x.first << ": ";
        for (auto a: x.second) {
            cout << a << " ";
        }
        cout << "\n";
    }
}
