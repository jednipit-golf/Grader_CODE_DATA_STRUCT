#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,K,t,d,a,q;
    cin >> n >> m >> K;
    vector<tuple<int,int,int>> oper;
    vector<pair<int, int>> q2;
    while(n--){
        cin >> t >> d; 
        oper.push_back({t, 0, d});
    }
    oper.push_back({0, 0, 0});
    for(int i=0;i<m;i++){
        cin >> a >> q;
        if (a == 1) oper.push_back({q, 1, i});
        else q2.push_back({q, i});
    }
    sort(q2.begin(), q2.end());
    sort(oper.begin(), oper.end());
    vector<int> ans(m);
    for (auto &[ti, op, sp] : oper) {
        if (op == 0) K = max(K-sp, 0);
        else if (op == 1) ans[sp] = K;
        while (!q2.empty() and K < q2.back().first) {
            ans[q2.back().second] = ti;
            q2.pop_back();
        }
    }
    for (int x : ans) cout << x << "\n";
}