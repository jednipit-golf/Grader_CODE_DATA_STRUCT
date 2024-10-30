#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;
int main(){
    cout << fixed << setprecision(2);
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N,ID,score;
    string name;
    map<string,int> teacher;
    map<string,int> teacherCount;
    map<int,int> subject;
    map<int,int> subjectCount;
    cin >> N ;
    for (int i=0;i<N;i++){
        cin >> ID >> name >> score;
        if (subject[ID] == 0){
            subject[ID] = score;
            subjectCount[ID]++;
        } else {
            subject[ID] += score;
            subjectCount[ID]++;
        }
        if (teacher[name] == 0){
            teacher[name] = score;
            teacherCount[name]++;
        } else {
            teacher[name] += score;
            teacherCount[name]++;
        }
    }
    for (const auto&x :subjectCount){
        float mean = (subject[x.first]+0.0)/x.second;
        cout << x.first << " " << mean << endl; 
    }
    for (const auto&x :teacherCount){
        float mean = (teacher[x.first]+0.0)/x.second;
        cout << x.first << " " << mean << endl; 
    }
}