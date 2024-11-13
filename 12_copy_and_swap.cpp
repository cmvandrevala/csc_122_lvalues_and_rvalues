#include <algorithm>
#include <iostream>

using namespace std;

class SwapFoo
{
public:
  int *bar;
  SwapFoo(int value)
  {
    bar = new int(value);
  }

  // User-defined copy constructor using copy-and-swap idiom
  SwapFoo(const SwapFoo &other) : bar(new int(*other.bar)) {}

  // Swap function
  friend void swap(SwapFoo &first, SwapFoo &second)
  {
    swap(first.bar, second.bar);
  }

  ~SwapFoo()
  {
    delete bar;
  }
};

int main()
{
  SwapFoo foo_one(100);
  SwapFoo foo_two = foo_one; // Copy-and-swap copy constructor is called

  cout << *foo_one.bar << endl;
  cout << *foo_two.bar << endl;
}
