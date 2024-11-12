#include <bits/stdc++.h>
using namespace std;

int main()
{
  priority_queue<int> max_heap;

  max_heap.push(17);
  max_heap.emplace(11);
  max_heap.push(76);
  max_heap.push(33);
  max_heap.push(54);

  cout << "Size of Max Heap priority_queue: " << max_heap.size() << endl;

  cout << "Elements: ";
  while (!max_heap.empty())
  {
    cout << max_heap.top() << " ";
    max_heap.pop();
  }

  return 0;
}