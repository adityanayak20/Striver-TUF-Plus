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

  // As Set stores unique elements so the count is always 1 when element is present and 0 otherwise
  cout << st.count(20) << endl; // 1
  cout << st.count(10) << endl; // 1
  cout << st.count(99) << endl; // 0

  return 0;
}