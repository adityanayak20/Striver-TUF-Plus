#include <bits/stdc++.h>
using namespace std;

int main()
{

  // Different ways to Initialize pair

  // Type 1
  pair<int, char> p1(1, 'A');
  // Type 2
  pair<int, char> p2 = {2, 'B'};
  // Type 3
  pair<int, char> p3 = make_pair(3, 'C');
  // Type 4
  pair<int, char> p4;
  p4.first = 4;
  p4.second = 'D';

  // Copy Contents of another Pair
  pair<int, char> p5 = {5, 'E'};

  // Copy contents of P5 to P6 during initialization
  pair<int, char> p6(p5);

  // Default Values of Pair of different Data Types

  pair<int, double> p7;
  cout << "p7 = (" << p7.first << ", " << p7.second << ")" << endl;

  pair<char, string> p8;
  cout << "p8 = (" << p8.first << ", " << p8.second << ")" << endl;

  pair<bool, bool> p9;
  cout << "p9 = (" << p9.first << ", " << p9.second << ")" << endl;

  return 0;
}