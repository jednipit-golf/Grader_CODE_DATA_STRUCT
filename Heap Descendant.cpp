#include <iostream>
#include <queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,a;
    vector<int> ans;
    queue<int> work;
    cin >> n >> a;
    work.push(a);
    while(!work.empty()){
        int nodex = work.front();
        int node_l = nodex * 2 + 1; 
        int node_r = nodex * 2 + 2;
        if (node_l < n) work.push(node_l);
        if (node_r < n) work.push(node_r);
        ans.push_back(nodex);
        work.pop();
    }
    cout << ans.size() << "\n";
    for(auto &x :ans){
        cout << x << " ";
    }
    cout << "\n";
}