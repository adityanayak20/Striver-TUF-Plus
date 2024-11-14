#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<int> s1, s2;
  s1.push(10);
  s1.push(20);
  s1.push(30);

  s2.push(100);
  s2.push(200);
  s2.push(300);

  cout << "Top element of s1 before swap: " << s1.top() << endl;
  cout << "Top element of s2 before swap: " << s2.top() << endl;
  s1.swap(s2);
  cout << "Top element of s1 after swap: " << s1.top() << endl;
  cout << "Top element of s2 after swap: " << s2.top() << endl;

  return 0;
}