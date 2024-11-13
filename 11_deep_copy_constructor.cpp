#include <cstring>
#include <iostream>

using namespace std;

class DeepFoo
{
public:
  char *bar;
  DeepFoo(const char *str)
  {
    bar = new char[strlen(str) + 1];
    strcpy(bar, str);
  }

  DeepFoo(const DeepFoo &foo)
  {
    bar = new char[strlen(foo.bar) + 1];
    strcpy(bar, foo.bar);
  }

  ~DeepFoo()
  {
    delete[] bar;
  }
};

int main()
{
  DeepFoo foo_one("My super cool string");
  DeepFoo foo_two = foo_one;

  cout << foo_one.bar << endl;
  cout << foo_two.bar << endl;
}
