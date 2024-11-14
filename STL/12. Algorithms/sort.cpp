#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {3, 1, 4, 1, 5, 9};
  sort(v.begin(), v.end());
  for (int x : v)
  {
    cout << x << " ";
  }
  return 0;
}