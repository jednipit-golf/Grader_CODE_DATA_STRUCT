#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

template <typename T>
void test()
{
    int n, m;
    std::cin >> n >> m;
    CP::stack<T> st;
    for (int i = 0;i < n;i++) {
      T tmp;
      std::cin >> tmp;
      st.push(tmp);
    }
    for (int i = 0;i < m;i++) {
      int k;
      std::cin >> k;
      std::vector<std::vector<T>> res = st.split_stack(k);
      if (res.size() != (size_t)k) {
        std::cout << "WRONG MAIN SIZE" << std::endl;
        exit(0);
      }

      std::vector<int> expected_size(k,n/k);
      for (int i = 0;i < n % k;i++) expected_size[i]++;

      for (int i = 0;i < k;i++) {
        if (res[i].size() != (size_t)expected_size[i]) {
          std::cout << "WRONG SUB SIZE" << std::endl;
          exit(0);
        }
      }
      for (int i = 0;i < k;i++) {
        std::cout << "vector " << i << "(" << res[i].size() << "): ";
        for (auto &x : res[i]) {
          std::cout << x << " ";
        }
        std::cout << "\n";
      }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int type;
    std::cin >> type;
    if (type == 0) {
        test<int>();
    } else {
        test<std::string>();
    }
    std::cout << "PASSWORD: 139847Z<>;q34p98lhkzjsxdbvkab.s,rjgnhb;sliedrhygp;9s83yeh4;tlksdf\n";
}
