#include <iostream>

using namespace std;

int n, k, v;
int color[1000005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n >> k >> v;
    for (int i = 0; i < n; i++) cin >> color[i];

    int lhs = k-1, rhs = k;
    int cnt = 0;
    while (~lhs && color[lhs] == v) lhs--, cnt++;
    while (rhs < n && color[rhs] == v) rhs++, cnt++;
    if (cnt < 2) lhs = k-1, rhs = k;

    if (lhs != k-1 || rhs != k) {
        while (~lhs && rhs < n && color[lhs] == color[rhs]) {
            int c = color[lhs];
            while (~lhs && color[lhs] == c) lhs--;
            while (rhs < n && color[rhs] == c) rhs++;
        }
    }

    for (int i = 0; i <= lhs; i++) cout << color[i] << ' ';
    if (lhs == k-1 && rhs == k) cout << v << ' ';
    for (; rhs < n; rhs++) cout << color[rhs] << ' ';

    return 0;
}
