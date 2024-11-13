int return_rvalue()
{
  return 10;
}

int main()
{
  // Valid!
  return_rvalue() == 15;

  // Invalid - check out the error
  // return_rvalue() = 15;
}
