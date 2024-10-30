#include <iostream>
#include <map>
#include <string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    map<string,int>wordCount;
    string word;
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> word;
        wordCount[word]++;
    }
    string maxWord = "";
    int maxCount = 0;
    for(const auto& pair : wordCount){
        if(pair.second >= maxCount){
            maxCount = pair.second;
            maxWord = pair.first;
        }
    }
    cout << maxWord << " " << maxCount << endl;
}