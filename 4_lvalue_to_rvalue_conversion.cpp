#include <iostream>

using namespace std;

int main()
{
  // We set lvalue x to the rvalue 5
  int x{5};
  cout << x << endl;

  // We set lvalue y to the lvalue x - which means we need to convert first!
  int y{x};
  cout << y << endl;

  // We sum up lvalue x and lvalue y - which means both need to be converted to rvalues first!
  int z = x + y;
  cout << z << endl;
}
