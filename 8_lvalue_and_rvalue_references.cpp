#include <iostream>

using namespace std;

int main()
{
  int x = 10;
  int &lref1 = x;        // lvalue reference to lvalue
  const int &lref2 = 15; // lvalue reference to rvalue
  int &&rref = 20;       // rvalue reference to rvalue
  rref = 100;
  x = 200;
  cout << x << " " << lref1 << " " << lref2 << " " << rref;
  return 0;
}
