#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m ;
    vector<int> t(n);
    for(int i=0;i<n;i++){
        cin >> t[i];    
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    for (int i = 0; i < n; i++) {
        pq.push({0, i});
    }
    for (int i = 0; i < m; i++) {
        // ดึงเชฟที่ว่างเร็วที่สุดออกมา
        auto [available_time, chef_index] = pq.top();
        pq.pop();
            
        // แสดงเวลาที่ลูกค้าคนนี้ได้นั่ง
        cout << available_time << endl;
            
        // อัปเดตเวลาที่เชฟจะว่างใหม่
        pq.push({available_time + t[chef_index], chef_index});
    }

}
