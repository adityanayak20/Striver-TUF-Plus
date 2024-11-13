#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, string> m = {{1, "one"}, {2, "two"}, {3, "three"}};
  auto it1 = m.lower_bound(2); // >=
  cout << "Lower Bound: " << it1->first << ": " << it1->second << endl;
  auto it2 = m.upper_bound(2); // >
  cout << "Upper Bound: " << it2->first << ": " << it2->second;
  return 0;
}