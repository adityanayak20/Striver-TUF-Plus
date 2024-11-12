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

  return 0;
}