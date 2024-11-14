#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {45, 29, 31, 84, 75};
  reverse(v.begin(), v.end());
  for (int x : v)
  {
    cout << x << " ";
  }
  return 0;
}
