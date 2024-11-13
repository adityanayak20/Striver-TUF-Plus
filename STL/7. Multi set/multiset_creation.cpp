#include <bits/stdc++.h>
using namespace std;

int main()
{
  multiset<int> ms = {10, 20, 20, 30, 30, 40, 40, 40, 5};
  ms.erase(20); // Erase all occurrences of 20
  cout << "After deleting 20" << endl;
  for (int x : ms)
  {
    cout << x << " ";
  }

  cout << endl
       << "All occurrences of 40: " << endl;
  auto itr = ms.equal_range(40);
  for (auto i = itr.first; i != itr.second; i++)
  {
    cout << *i << " ";
  }

  return 0;
}