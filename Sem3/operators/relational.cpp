#include <iostream>

using namespace std;

// Relational operators
int main()
{
  int a, b;

  cout << "enter value of a : ";
  cin >> a;

  cout << "enter value of b : ";
  cin >> b;

  // greater than operator
  if (a > b)
  {
    cout << "a is greater than b\n";
  }

  // less than operator
  if (a < b)
  {
    cout << "b is greater than a\n";
  }

  // equal to operator
  if (a == b)
  {
    cout << "value of a is equal to value of b\n";
  }

  if (a != b)
  {
    cout << "value of a is not equal to value of b\n";
  }

  // greater than operator
  if (a >= b)
  {
    cout << "a is greater than or equal to b\n";
  }

  // less than operator
  if (a < b)
  {
    cout << "b is greater than or equal to a\n";
  }
  return 0;
}