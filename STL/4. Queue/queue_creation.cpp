#include <bits/stdc++.h>
using namespace std;

int main()
{
  queue<int> q;
  q.push(10);
  q.emplace(20);
  q.push(30);

  cout << "Size of Queue: " << q.size() << endl;
  cout << "Elements: ";
  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  return 0;
}