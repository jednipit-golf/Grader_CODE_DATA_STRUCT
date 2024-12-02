#include <bits/stdc++.h>
using namespace std;

class value {
    public:
        int status = 0; // 0 = empty, 1 = deleted, 2 = used
        int data;
        bool empty() { return status == 0; }
        bool available() { return status < 2; }
};

int n;
std::vector<value> arr;

int h(int &x) {
    return x % n;
}


void erase(int &b) {
    int index = h(b);
    int firstDelete, cnt = 0;
    bool foundfirstdel = false;
    while (! arr[(index + cnt*cnt) % n].empty()) {
        if (arr[(index + cnt*cnt) % n].status == 2 && b == arr[(index + cnt*cnt) % n].data) break;
        cnt++;
    }
    if (arr[(index + cnt*cnt) % n].data == b) arr[(index + cnt*cnt) % n].status = 1;
}

void insert(int &b) {
    int index = h(b);
    int cnt = 0;
    while (! arr[(index + cnt*cnt) % n].available()) {
        cnt++;
    }
    arr[(index + cnt*cnt) % n].data = b; //guaruntee that it never exist
    arr[(index + cnt*cnt) % n].status = 2;
}

void Probe(int &maxInsert, int &maxFind) {
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        bool ins = true;
        if (arr[i].status == 0) continue;
        
        while (arr[(i + cnt*cnt) % n].status != 0) {
            if (ins && arr[(i + cnt*cnt) % n].status == 1) {
                maxInsert = std::max(maxInsert, cnt+1);
                ins = false;
            }
            cnt++;
        }
        maxFind = std::max(maxFind, cnt+1);
        if (ins) maxInsert = std::max(maxInsert, cnt+1);;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);
    int m;std::cin >> n >> m;
    arr.resize(n);
    while (m--) {
        int a, b;std::cin >> a >> b;
        if (a == 1) {
            insert(b);
        } else {
            erase(b);
        }
    }
    int maxInsert = 1, maxFind = 1;
    Probe(maxInsert, maxFind);
    std::cout << maxInsert << " " << maxFind << "\n";
    return 0;
}