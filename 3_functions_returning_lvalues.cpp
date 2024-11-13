#include <iostream>

using namespace std;

int global = 100;

int &return_lvalue()
{
  return global;
}

int main()
{
  // Valid!
  cout << (return_lvalue() == 15) << endl;

  // What? This is valid???
  cout << global << endl;
  return_lvalue() = 15;
  cout << global << endl;
}

// return_lvalue returns a reference which points to an existing memory location.
// Thus the function returns an lvalue, so it can be assigned to.
