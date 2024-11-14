#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> lst;
  lst.push_front(20);
  lst.emplace_front(10); // Constructs 10 at the beginning
  lst.push_front(30);
  lst.push_front(10);
  lst.pop_front();
  for (int i : lst)
  {
    cout << i << " ";
  }
  cout << endl
       << "Front element: " << lst.front();
  return 0;
}