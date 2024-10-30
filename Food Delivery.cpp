#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m,order,check,price;
    int g = 0;
    int count = 0;
    cin >> n >> m;
    vector<int> goal(m);
    map<int,int> money;
    queue<int> foodplatong;
    queue<int> dotman;
    for (int i = 0;i<m;i++){
        cin >> goal[i];
    }
    for (int i = 0;i<n;i++){
        cin >> order;
        if (order == 1){
            cin >> check >> price;
            if (check == 1){
                foodplatong.push(price);
            }else if (check == 2){
                dotman.push(price);
            }
        }else if(order == 2){
            int cook;
            if (foodplatong.size() == 0 && dotman.size() != 0){
                cook = dotman.front();
                dotman.pop();
            }else if (dotman.size() == 0 && foodplatong.size() != 0){
                cook = foodplatong.front();
                foodplatong.pop();
            }else{
                auto o1 = foodplatong.front();
                auto o2 = dotman.front();
                if (o1 <= o2){
                    cook = o1;
                    foodplatong.pop();
                }else{
                    cook = o2;
                    dotman.pop();
                }
            }
            g += cook;
            count++;
            money[g] = count;
        }
    }
    for (auto x:goal){
        auto it = money.lower_bound(x);
        if (it == money.end()){
            cout << "-1 ";
        }else{
            cout << it->second << " ";
        }
    }
}