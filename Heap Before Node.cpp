#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> work;
    vector<int> oo;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    if(k !=0){
        vector<bool> ans(n,true);
        work.push(k);
        while(!work.empty()){
            int node = work.front();
            ans[node] = false;
            int node_r = (2*node) +1;
            int node_l = (2*node) +2;
            if(node_r < n) {
                work.push(node_r);
                ans[node_r] = false;
            }
            if(node_l < n) {
                work.push(node_l);
                ans[node_l] = false;
            }
            work.pop();
        }
        for(int i=0;i<n;i++){
            if(ans[i]){
                oo.push_back(i);
            }
        }
        cout << oo.size() << endl;
        for(auto &x:oo){
            cout << x << " ";
        }
        cout << endl;

    }else{
        cout << 0 << endl;
    }
    return 0;
}