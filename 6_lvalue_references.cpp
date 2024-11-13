// lvalue references can only be bound to lvalues but not rvalues

int square_v1(int &x)
{
  return x * x;
}

int square_v2(const int &x)
{
  return x * x;
}

int main()
{
  int i = 7;

  square_v1(i); // OK
  // square_v1(7); // ERROR - 7 is an rvalue and cannot be assigned to a reference

  square_v2(i); // OK
  square_v2(7); // OK - we can bind an rvalue to a const lvalue reference (const reference):
}
