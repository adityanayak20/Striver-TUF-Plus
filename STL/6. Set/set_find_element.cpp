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

  auto it1 = st.find(10);
  if (it1 != st.end())
  {
    cout << *it1 << endl;
  }

  auto it2 = st.find(90);
  if (it2 != st.end())
  {
    cout << *it2 << endl;
  }

  return 0;
}