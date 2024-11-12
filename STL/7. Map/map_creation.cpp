#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, string> mpp;

  // Element Insertion in Map
  // Type 1
  mpp.insert({2, "Kent"});
  // Type 2
  mpp[1] = "Wayne";
  mpp[5] = "Irons";

  cout << "Elements:-" << endl;
  for(auto it : mpp)
  {
    cout << it.first << "->" << it.second << endl;
  }
  return 0;
}