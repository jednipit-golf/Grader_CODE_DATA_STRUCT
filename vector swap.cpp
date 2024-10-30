#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1,vector<int> &v2,int start1, int end1,int start2, int end2) {
    vector<int> a1;
    vector<int> a2;
    int t1 = v1.size();
    int t2 = v2.size();
    for (auto i = 0;i < start1;i++){
        a1.push_back(v1[i]);
    }
    for (auto i = 0;i < start2;i++){
        a2.push_back(v2[i]);
    }
    for (auto i = start1;i < end1;i++){
        a2.push_back(v1[i]);
    }
    for (auto i = start2;i < end2;i++){
        a1.push_back(v2[i]);
    }
    for (auto i = end1;i < t1;i++){
        a1.push_back(v1[i]);
    }
    for (auto i = end2;i < t2;i++){
        a2.push_back(v2[i]);
    }
    v1 = a1;
    v2 = a2;
    /////////////////////////////// by gpt *///////////////////////
    // vector<int> vec1(v1.begin()+start1,v1.begin()+end1);
    // vector<int> vec2(v2.begin()+start2,v2.begin()+end2);
    
    // v1.erase(v1.begin()+start1,v1.begin()+end1);
    // v2.erase(v2.begin()+start2,v2.begin()+end2);

    // v1.insert(v1.begin() + start1, vec2.begin(), vec2.end());
    // v2.insert(v2.begin() + start2, vec1.begin(), vec1.end());


}
int main() {
    //read input
    int n,c;
    vector<int>v1,v2;
    cin >> n; //number of v1
    for (int i = 0;i < n;i++) {
    cin >> c;
    v1.push_back(c);
    }
    cin >> n; //number of v2
    for (int i = 0;i < n;i++) {
    cin >> c;
    v2.push_back(c);
    }
    int s1,e1,s2,e2; //position
    cin >> s1 >> e1 >> s2 >> e2;
    //call the function
    vector_swap(v1,v2,s1,e1,s2,e2);
    //display content of the stack
    cout << "v1 has " << v1.size() << endl;
    for (auto &x : v1) { cout << x << " "; }
    cout << endl;
    //display content of the stack
    cout << "v2 has " << v2.size() << endl;
    for (auto &x : v2) { cout << x << " "; }
    cout << endl;
}