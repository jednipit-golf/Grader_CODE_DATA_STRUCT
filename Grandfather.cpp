#include <iostream>
#include <map>

std::map<long, long> Father;

long find_grandfather(long x){
    if (Father.find(x) != Father.end()){
        long father = Father[x];
        if (Father.find(father) != Father.end()){
            return Father[father];
        }
    }
    return 0;
}

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int N,M;
    long F,S,A,B;
    std::cin >> N >> M;
    for (int i=0;i<N;i++){
        std::cin >> F >> S;
        Father[S] = F;
    }
    for (int i=0;i<M;i++){
        std::cin >> A >> B;
        if (A == B){
            std::cout << "NO\n";
            continue;
        }
        long A1 = find_grandfather(A);
        long B1 = find_grandfather(B);
        if(A1 != 0 && A1 == B1){
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}