#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N;
    map<string,int> map1;
    cin >> N;
    for(int i=0;i<N;i++){
        string word;
        cin >> word;
        if (map1[word]==0){
            map1[word] = 1;
        } else {
            map1[word]++;
        }
    }

    for(const auto&x :map1){
        if (x.second > 1){
            cout << x.first << " " << x.second << endl;
        }
    }
}

