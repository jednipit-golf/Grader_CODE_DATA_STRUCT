#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    long long mSize = 0,n,mCap=1;
    cin >> n;
    for(int i= 0;i<n;i++){
        int a,k;
        cin >> a >> k;
        if(a == 0){
            mSize += k;
            while(mCap < mSize){
                mCap *= 2;
            }
        } else if(a == 1){
            mSize -= k;
        }
    }
    cout << mCap-mSize;
}

