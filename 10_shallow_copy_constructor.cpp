#include <iostream>

using namespace std;

class ShallowFoo
{
public:
  int bar;
  ShallowFoo(int b) : bar(b) {}
  ShallowFoo(const ShallowFoo &foo) : bar(foo.bar + 1) {}
};

int main()
{
  ShallowFoo foo_one(10);
  ShallowFoo foo_two = foo_one;

  cout << foo_one.bar << endl;
  cout << foo_two.bar << endl;
}
