// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);cin.tie(0);
//     int n,m;
//     cin >> n >> m;
//     vector<int> vec1(n);
//     vector<int> ans;
//     for (int i = 0; i < n; i++) {
//         cin >> vec1[i];
//     }
//     sort(vec1.begin(),vec1.end());
//     bool lose = false;
//     for (int i = 0; i < m; i++) {
//         int k;
//         cin >> k;
//         vector<int> vec2(k);
//         for (int i = 0; i < k; i++) {
//             cin >> vec2[i];
//         }
//         for (const auto x:vec2){
//             auto it = upper_bound(vec1.begin(),vec1.end(),x);
//             if (it == vec1.end()){
//                 ans.push_back(i+1);
//                 lose = true;
//                 break;
//             }else{
//                 vec1.erase(it);
//             }
//         }
//     }
//     if(!lose){
//         cout << m+1;
//     }else{
//         cout << *min_element(ans.begin(),ans.end());
//     }
// }
#include<bits/stdc++.h>
using namespace std;
map<int,int> mapp;
int main(){
    int n,m,k,num,ch=0,ans=0;
    cin >> n >> m;;
    for(int i=0;i<n;i++){
        cin >> num;
        mapp[num]++;
    }
    for(int i=1;i<=m;i++){
        cin >> k;;
        for(int j=0;j<k;j++){
            cin >> num;
            if(ch)  continue;
            auto it = mapp.upper_bound(num);
            if(it == mapp.end()){
                ch = 1;
                ans = i;
            }else{
                int idx = it->first;
                mapp[idx]--;
                if(!mapp[idx])  mapp.erase(idx);
            }
        }
    }
    if(ch)  cout << ans;
    else    cout << m+1;
    return 0;
}



