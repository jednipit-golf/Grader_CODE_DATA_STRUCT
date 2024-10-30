#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {   
    int a,b,n,x;
    int i = 1;
    int o = 1;
    cin >> a >> b;
    cin >> n;
    vector<vector<int>> k;
    vector<int> g;
    while (i != a+1){
        while (o != b+1){
            cin >> x;
            g.push_back(x);
            o++;
        }
        k.insert(k.end(),g);
        o = 1;
        g = {};
        i++;
    }
    int r1,r2,c1,c2;
    for(int count=1;count<=n;count++)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        if (r1 > r2 or c1 > c2){
            cout << "INVALID" << endl;
        }else if(r1>a or c1>b){
            cout << "OUTSIDE" << endl;
        }else{
            if(r2>a){
                r2=a;
            }
            if(c2>b){
                c2=b;
            }
            int xx = k[r1-1][c1-1];
            for (int i=r1-1;i<r2;i++){
                for(int j=c1-1;j<c2;j++){
                    if(k[i][j] > xx){
                        xx = k[i][j];
                    }
                }
            }
            cout << xx << endl;
        }
    }
    return 0;
}
    


