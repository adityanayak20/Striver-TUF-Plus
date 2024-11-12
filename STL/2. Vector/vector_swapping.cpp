#include <bits/stdc++.h>
using namespace std;
void printVector(const vector<int> &v)
{
  for (int x : v)
  {
    cout << x << " ";
  }
  cout << endl;
}
int main()
{
  vector<int> v1 = {10, 30, 50};
  vector<int> v2 = {20, 40, 60};

  cout << "BEFORE Swapping :-" << endl;
  printVector(v1);
  printVector(v2);

  v1.swap(v2);

  cout << "AFTER Swapping :-" << endl;
  printVector(v1);
  printVector(v2);

  return 0;
}