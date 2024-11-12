#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Different ways to Initialize vector

  // Type 1: 5 element with their default values 0
  vector<int> v1(5);
  // Type 2: 5 element with values 20
  vector<int> v2(5, 20);

  // Type 3: Creating vector from the contents of an array
  int arr[] = {35, 23, 24, 21, 78};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int> v3(arr, arr + n);

  // Type 4: Adding contents to vector using push_back()
  vector<int> v4;
  v4.push_back(10);
  v4.emplace_back(20); // it adds element directly to the vector
  v4.push_back(30);
  v4.push_back(40);

  // Different ways to Print vector

  // Type 1: Using standard for loop from 0 to size()-1 and [] operator
  // size() gives the size of vector
  for (int i = 0; i < v1.size(); i++)
  {
    cout << v1[i] << " ";
  }
  cout << endl;

  // Type 2: Using for-each loop
  for (int x : v2)
  {
    cout << x << " ";
  }
  cout << endl;

  // Type 3: Using standard for loop with iterator pointing from begin() to element before end()
  vector<int>::iterator itr;
  for (itr = v3.begin(); itr != v3.end(); itr++)
  {
    cout << *itr << " ";
  }
  cout << endl;

  // PRINTING REVERSE

  // Type 1: Using reverse iterator
  cout << "Printing contents of vector in reverse" << endl;
  // One can use ' auto it '  instead of ' vector<int>::iterator it '
  auto it = v4.rbegin();
  while (it != v4.rend())
  {
    cout << *it << " ";
    it++;
  }
  cout << endl;

  // Type 2: Using pop_back()

  // empty() returns true when the vector is empty and false otherwise
  while (!v4.empty())
  {
    // back() returns last element and front() returns the first element of the vector
    cout << v4.back() << " "; // Retrieve the last element
    v4.pop_back();            // Remove the last element
  }

  return 0;
}