#include <iostream>
#include <cmath>
using namespace std;
int relation(long long S, long long a, long long b) {
    if (a == b){
        return 4;
    }
    if (a<b){
        swap(a,b);  
    }
    if (b == (a - 1)/S){
        return 1;
    }else{
        long long tmp = a;
        while (tmp!=b and tmp > b){
            tmp = (tmp-1)/S;
        }
        if (tmp == b){
            return 2;
        }
    }
    long long lev_a,lev_b;
    if(a == 0){
        lev_a =0;
    }else{
        a++;
        lev_a = log(a*(S-1))/log(S);
    }
    if(b == 0){
        lev_b = 0;
    }else{
        b++;
        lev_b = log(b*(S-1))/log(S);
    }
    if(lev_a != lev_b){
        return 3;
    }else{
        return 4;
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    long long S,a,b;
    cin >> n;
    while (n--) {
        cin >> S >> a >> b;
        cout << relation(S,a,b) << " ";
    }
    cout << endl;
}