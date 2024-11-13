#include <iostream>

using namespace std;

// We will now look at the compiler’s ability to distinguish lvalues from rvalues.
// It should call the corresponding function variant depending on the type of argument passed.

void pass(int &&param)
{
  cout << "Rvalue\n";
}

void pass(int &param)
{
  cout << "Lvalue\n";
}

int main()
{
  int i{5};
  int &lv_ref = i; // OK
  // int &lv_ref = 5; // ERROR

  int &&rv_ref = 10; // OK
  // int &&rv_ref = i; // ERROR
  rv_ref = 20;
  cout << "rv_ref = " << rv_ref << endl;

  pass(i);
  pass(5);
  pass(rv_ref);

  return 0;
}
