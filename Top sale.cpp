#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int n,m,x,a,b;
    cin >> n >> m ;
    unordered_map<int,int> sale;
    set<pair<int,int>> s1;
    for(int i=0;i<n;i++){
        cin >> x;
        sale[x];
    }
    for(int i=0;i<m;i++){
        cin >> x;
        if(x == 1){
            cin >> a >> b;
            auto it = sale.find(a);
            if (it != sale.end()){
                s1.erase({sale[a],a});
                sale[a] += b;
                s1.insert({sale[a],a});
            }
        }else if(x == 2){
            cin >> a;
            auto it = s1.lower_bound({a,0});
            if (it == s1.begin()) {
                if (it->first < a) {
                    cout << it->second << "\n";
                } else {
                    cout << "NONE\n";
                }
            } else  {
                it--;
                cout << it->second << "\n";
            }
        }   
    }
}

