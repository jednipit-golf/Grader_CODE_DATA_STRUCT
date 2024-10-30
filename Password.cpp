#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m,l;
int v[1000005];
string encrypt(string s){
    for (int i = 0; i < l; i++) {
        s[i] = (int)(s[i] - 'a' + v[i]) % 26 + 'a';
    }
    return s;
}
int main(){
    set<string> db;
    string s;
    cin >> n >> m >> l;
    for(int i=0;i<l;i++) cin >> v[i];
    while(n--){
        cin >> s;
        db.insert(s);
    }
    while(m--){
        cin >> s;
        string pw = encrypt(s);
        if (db.find(pw) != db.end()) {
            printf("Match\n");
        }else{
            printf("Unknown\n");
        }
    }
}