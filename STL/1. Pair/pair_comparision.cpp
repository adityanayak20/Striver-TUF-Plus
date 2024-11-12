#include <bits/stdc++.h>
using namespace std;

int main()
{
  pair<int, int> p1(1, 12), p2(9, 12), p3(9, 15);

  // Checks both the first & second value of both pairs
  cout << "p1 == p2 : " << (p1 == p2) << endl;
  cout << "p2 != p3 : " << (p2 != p3) << endl;

  // Checks only the first value of both pairs
  cout << "p1 >= p2 : " << (p1 >= p2) << endl;
  cout << "p1 <= p2 : " << (p1 <= p2) << endl;
  cout << "p1 > p2 : " << (p1 > p2) << endl;
  cout << "p1 < p2 : " << (p1 < p2) << endl;

  return 0;
}

/*
• Comparison (==) operator with pair : For given two pairs say pair1 and pair2, the comparison operator compares the first value and second value of those two pairs i.e. if pair1.first is equal to pair2.first or not AND if pair1.second is equal to pair2.second or not .

• Not equal (!=) operator with pair : For given two pairs say pair1 and pair2, the != operator compares the first values of those two pairs i.e. if pair1.first is equal to pair2.first or not, if they are equal then it checks the second values of both.

• Logical(>=, <= )operators with pair : For given two pairs say pair1 and pair2, the =, ,> can be used with pairs as well. It returns 0 or 1 by only comparing the first value of the pair.
*/