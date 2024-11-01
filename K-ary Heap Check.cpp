#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    int m,n,k;
    cin >> m;
    while(m--){
        cin >> n >> k;
        int a[n];
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        bool valid = true;
        for(int i = 1 ; i < n && valid ; i++) {
            int parent = (i - 1) / k;
            if(a[parent] < a[i]) {
                valid = false;
            }
        } 
        if (valid) {
            cout << "true\n";
        } else {
            cout << "false\n";
        }
    }
}