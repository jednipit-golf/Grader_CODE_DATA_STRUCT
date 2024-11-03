#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    int mFront, mSize, mCap, last ,correction;
    cin >> n;
    while(n--){
        cin >> mFront >> mSize >> mCap >> last >> correction;
        if(correction == 0){ 
            if(mFront < mCap && mCap >= mSize && last < mCap && (mFront + mSize) % mCap == last){
                cout << "OK" << endl;
            }else{
                cout << "WRONG" << endl;
            }
        }else if(correction == 1){
            if(mFront < mCap && mCap >= mSize && last < mCap && (mFront + mSize) % mCap == last){
                cout << "OK" << endl;
            }else{
                mFront = (last + mCap - mSize) % mCap;
                cout << "WRONG " << mFront <<endl;
            }
        }else if(correction == 2){
            if(mFront < mCap && mCap >= mSize && last < mCap && (mFront + mSize) % mCap == last){
                cout << "OK" << endl;
            }else{
                mSize = (last + mCap - mFront) % mCap;
                cout << "WRONG " << mSize <<endl;
            }
        }else if(correction == 3){
            if(mFront < mCap && mCap >= mSize && last < mCap && (mFront + mSize) % mCap == last){
                cout << "OK" << endl;
            }else{
                mCap = (mFront < last)? mSize + mFront + 1: mFront - last + mSize;
                cout << "WRONG " << mCap <<endl;
            }
        }else if(correction == 4){
            if(mFront < mCap && mCap >= mSize && last < mCap && (mFront + mSize) % mCap == last){
                cout << "OK" << endl;   
            }else{
                last = (mFront+mSize)%mCap ;
                cout << "WRONG " << last <<endl;
            }
        }
    }
}