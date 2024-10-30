
#include <iostream>
using namespace std;
int main() {
    int H, M, S;
    cin >> H >> M;
    cin >> S;
    int totalMinutes = H * 60 + M;
    totalMinutes += S;
    int NH = (totalMinutes / 60) % 24; 
    int NM = totalMinutes % 60;
    if(NH<10){
        if(NM<10){
            cout << "0" << NH << " 0" << NM; 
        }else{
            cout << "0" << NH << " " << NM;
        }
    }else{
        if(NM<10){
            cout << NH << " 0" << NM; 
        }else{
            cout << NH << " " << NM;
        }
    }
}