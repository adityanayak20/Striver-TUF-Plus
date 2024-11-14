#include <bits/stdc++.h>
using namespace std;

int main()
{
  deque<int> dq = {99, 10, 20, 30, 70};
  dq.push_front(0);
  dq.push_back(40);
  dq.emplace_front(8);
  dq.emplace_back(65);
  dq.pop_front();
  dq.pop_back();
  for (int i : dq)
  {
    cout << i << " ";
  }
  cout << endl
       << "Front element: " << dq.front();
  cout << endl
       << "Back element: " << dq.back();

  return 0;
}