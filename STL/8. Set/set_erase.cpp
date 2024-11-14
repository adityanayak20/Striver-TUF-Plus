#include <bits/stdc++.h>
using namespace std;

void eraseType1(set<int> st)
{
  st.erase(20);

  cout << endl
       << "After erasing element 20" << endl;
  for (auto it : st)
  {
    cout << it << " ";
  }
}

void eraseType2(set<int> st)
{
  auto it1 = st.begin();
  ++it1; // index 1
  ++it1; // index 2
  ++it1; // index 3

  st.erase(it1);

  cout << endl
       << "After erasing element at index 3" << endl;
  for (auto it : st)
  {
    cout << it << " ";
  }
}

void eraseType3(set<int> st)
{

  auto it1 = st.begin();
  ++it1; // index 1
  auto it2 = st.end();
  --it2; // index 5
  --it2; // index 4

  st.erase(it1, it2);

  cout
      << endl
      << "After erasing from index 1 to 3" << endl;

  for (auto it : st)
  {
    cout << it << " ";
  }
}

int main()
{
  set<int> st;

  st.insert(40);
  st.insert(20);
  st.insert(10);
  st.insert(20);
  st.insert(20);
  st.insert(30);
  st.insert(90);
  st.insert(70);

  cout << "Original Set" << endl;

  for (auto it : st)
  {
    cout << it << " ";
  }

  cout << endl
       << "---------------------------" << endl;

  eraseType1(st);
  eraseType2(st);
  eraseType3(st);

  return 0;
}