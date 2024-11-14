#include <bits/stdc++.h>
using namespace std;

int main()
{
  priority_queue<int, vector<int>, greater<int>> min_heap;

  min_heap.push(17);
  min_heap.emplace(11);
  min_heap.push(76);
  min_heap.push(33);
  min_heap.push(54);

  cout << "Size of Min Heap priority_queue: " << min_heap.size() << endl;

  cout << "Elements: ";
  while (!min_heap.empty())
  {
    cout << min_heap.top() << " ";
    min_heap.pop();
  }

  return 0;
}