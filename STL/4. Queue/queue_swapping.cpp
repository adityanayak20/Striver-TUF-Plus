#include <bits/stdc++.h>
using namespace std;

int main()
{
  queue<int> q1, q2;
  q1.push(10);
  q1.push(20);
  q1.push(30);

  q2.push(100);
  q2.push(200);
  q2.push(300);

  cout << "Front element of q1 before swap: " << q1.front() << endl;
  cout << "Front element of q2 before swap: " << q2.front() << endl;
  q1.swap(q2);
  cout << "Front element of q1 after swap: " << q1.front() << endl;
  cout << "Front element of q2 after swap: " << q2.front() << endl;

  return 0;
}