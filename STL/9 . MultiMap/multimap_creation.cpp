#include <bits/stdc++.h>
using namespace std;

int main()
{
  multimap<int, string> mp;

  mp.insert({1, "One"});
  mp.emplace(2, "Two");
  mp.emplace(3, "Three");
  mp.emplace(3, "Teen");
  mp.emplace(3, "Tri");
  mp.emplace(4, "Four");

  cout << "Elements : " << endl;
  for (auto x : mp)
  {
    cout << x.first << "->" << x.second << endl;
  }

  cout << endl
       << "All occurrences of 3: " << endl;
  auto itr = mp.equal_range(3);
  for (auto i = itr.first; i != itr.second; i++)
  {
    cout << i->first << "->" << i->second << endl;
  }

  return 0;
}