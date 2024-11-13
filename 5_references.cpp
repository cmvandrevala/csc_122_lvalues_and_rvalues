#include <iostream>

// In C++, a reference is an alias for an existing object.
// Once a reference has been defined, any operation on the reference is applied to the object being referenced.
// This means we can use a reference to read or modify the object being referenced.
// The & is used to declare a reference

int main()
{
  int x{1};
  int &ref{x};
  int y{2};

  std::cout << "Test 1" << std::endl;
  std::cout << x << std::endl;
  std::cout << y << std::endl;
  std::cout << ref << std::endl;
  std::cout << std::endl;

  ref = y;
  y = 3;

  std::cout << "Test 2" << std::endl;
  std::cout << x << std::endl;
  std::cout << y << std::endl;
  std::cout << ref << std::endl;
  std::cout << std::endl;

  x = 4;

  std::cout << "Test 3" << std::endl;
  std::cout << x << std::endl;
  std::cout << y << std::endl;
  std::cout << ref << std::endl;
  std::cout << std::endl;

  return 0;
}
