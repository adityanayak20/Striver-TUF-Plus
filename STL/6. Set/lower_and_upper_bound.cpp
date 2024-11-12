#include <bits/stdc++.h>
using namespace std;

int main()
{
  set<int> st;

  st.insert(40);
  st.insert(20);
  st.insert(10);
  st.insert(20);
  st.insert(20);
  st.insert(30);

  cout << "Elements: ";
  for (auto it : st)
  {
    cout << it << " ";
  }

  auto it1 = st.lower_bound(30); // >=
  auto it2 = st.upper_bound(35); // >

  if (it1 != st.end())
  {
    cout << "Lower Bound of 30 in Set: " << *it1 << endl;
  }

  if (it2 != st.end())
  {
    cout << "Upper Bound of 35 in Set: " << *it2 << endl;
  }

  return 0;
}