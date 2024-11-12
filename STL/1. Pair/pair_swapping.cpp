#include <iostream>
using namespace std;

int main()
{
  pair<string, int> p1, p2;
  p1 = make_pair("A", 1);
  p2 = make_pair("B", 2);

  cout << "BEFORE Swapping :-" << endl;
  cout << "p1 = (" << p1.first << ", " << p1.second << ")" << endl;
  cout << "p2 = (" << p2.first << ", " << p2.second << ")" << endl;

  cout << endl;
  p1.swap(p2);

  cout << "AFTER Swapping :-" << endl;
  cout << "p1 = (" << p1.first << ", " << p1.second << ")" << endl;
  cout << "p2 = (" << p2.first << ", " << p2.second << ")" << endl;

  return 0;
}