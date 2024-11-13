#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, string> m = {{1, "one"}, {2, "two"}, {3, "three"}};
  auto it = m.find(2);
  if (it != m.end())
    cout << "Found: " << it->second;
  else
    cout << "Not Found";
  return 0;
}