#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N,K;
    string name;
    map<string,int> vote_count;
    cin >> N >> K;
    for (int i=0;i<N;i++){
        cin >> name;
        vote_count[name]++;
    }
    cout << "--------------------------------" << endl;
    vector<int> vote;
    for (auto &data : vote_count) {
        vote.push_back(data.second);
    }
    sort(vote.begin(),vote.end(),greater<int>());
    int T = vote.size();
    if (T < K) {
        cout << vote.back() << endl;
    } else {
        int min_vote = vote[K-1];
        cout << min_vote << endl;
    }
}