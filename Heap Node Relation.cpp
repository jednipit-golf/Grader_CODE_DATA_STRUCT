#include <iostream>
#include <cmath>
using namespace std;

int isAncestor(int a,int b){

    if(a < b){
        while(b !=a and b>a){
            b = (b-1)/2;
        }
        if(b == a){
            return 1;
        }else{
            return 0;
        }
    }else{
        while(a !=b and a>b){
            a = (a-1)/2;
        }
        if(a == b){
            return 1;
        }else{
            return 0;
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    long long a,b;
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        if(a == b){
            cout << "a and b are the same node" << endl;
        }else{
            if(isAncestor(a,b)){
                if(a < b){
                    cout << "a is an ancestor of b" << endl;
                }else if(b < a){
                    cout << "b is an ancestor of a" << endl;
                }
            }else{
                cout << "a and b are not related" << endl;
            }
        }
    }
}
