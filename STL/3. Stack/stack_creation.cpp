#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Stack creation and insertion
  stack<int> s1;
  s1.push(10);
  s1.emplace(20);
  s1.push(30);

  cout << "Top element of stack s1: " << s1.top() << endl;

  // Printing
  cout << "Elements: ";
  while (!s1.empty())
  {
    cout << s1.top() << " ";
    s1.pop();
  }

  cout << endl;

  return 0;
}