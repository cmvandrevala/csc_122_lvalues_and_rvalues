int main()
{
  // CPP Reference - https://en.cppreference.com/w/cpp/language/value_category
  // a glvalue (“generalized” lvalue) is an expression whose evaluation determines the identity of an object or function;
  // a prvalue(“pure” rvalue) is an expression whose evaluation computes the value of an operand of a built-in operator(such prvalue has no result object), or initializes an object(such prvalue is said to have a result object).The result object may be a variable, an object created by new - expression, a temporary created by temporary materialization, or a member thereof.Note that non - void discarded expressions have a result object(the materialized temporary).Also, every class and array prvalue has a result object except when it is the operand of decltype;
  // an xvalue(an “eXpiring” value) is a glvalue that denotes an object whose resources can be reused;
  // an lvalue is a glvalue that is not an xvalue;
  // an rvalue is a prvalue or an xvalue;

  // Tutorials Point - https://www.tutorialspoint.com/What-are-Lvalues-and-Rvalues-in-Cplusplus
  // An lvalue (locator value) represents an object that occupies some identifiable location in memory (i.e. has an address).
  // rvalues are defined by exclusion. Every expression is either an lvalue or an rvalue, so, an rvalue is an expression that does not represent an object occupying some identifiable location in memory.

  // Learn C++ - https://www.learncpp.com/cpp-tutorial/value-categories-lvalues-and-rvalues/
  // An lvalue is an expression that evaluates to an identifiable object, function, or bit-field.
  // An rvalue is an expression that is not an lvalue (i.e. they evaluate to a value).

  // "Baby" Definition
  // An lvalue is something that points to a specific memory location.
  // An rvalue is something that doesn't point anywhere in particular.
  // You can sometimes think of lvalues as "containers" and rvalues as "things" contained in the containers.

  int w = 10;  // w is an lvalue and 10 is an rvalue (10 is a literal constant which is an rvalue)
  int *x = &w; // x is an lvalue and the memory address of x is an rvalue

  // C++ requires that an assignment must take an lvalue as its left operand

  // Invalid - check out the errors!
  // int y;
  // 10 = y;
  // int *z = &10;
}
