#include <iostream>
#include <map>
#include <string>
#include <set>
#include <vector>   
using namespace std;

bool check_permutation(int N, const vector<int>& S) {
    set<int> elements;

    for (int num : S) {
        elements.insert(num);
    }
    int a = elements.size();
    if (a != N) {
        return false;
    }
    for (int i = 1; i <= N; ++i) {
        if (elements.find(i) == elements.end()) {
            return false;
        }
    }
    return true;

}
int main() {
    int N;
    cin >> N;
    
    vector<int> S(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }
    
    if (check_permutation(N, S)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}