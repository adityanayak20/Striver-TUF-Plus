#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {1, 5, 3, 9, 7};
  auto it = max_element(v.begin(), v.end());
  cout << "Max Element: " << *it;
  return 0;
}
