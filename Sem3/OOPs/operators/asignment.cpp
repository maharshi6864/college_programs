#include <iostream>

using namespace std;

int main()
{
  int a = 0, b = 12;

  cout << "before value assigned to a\n";
  cout << "value of a = " << a << ".\n";
  //"=" is an assignment operator.\n\n
  a = 10;
  cout << "after value assigned to a\n";
  cout << "value of a = " << a << ".\n\n";

  cout << "before value assigned to b\n";
  cout << "value of b = " << b << ".\n";
  //"+= is a shorthand operator to add constant into a variable.\n\n"
  b += 12;
  cout << "after value assigned to b\n";
  cout << "value of b = " << b << ".\n\n";

  cout << "before value assigned to a\n";
  cout << "value of a = " << a << ".\n";
  //"-= is a shorthand operator to subtract a constant from a variable.\n\n"
  a -= 3;
  cout << "after value assigned to a\n";
  cout << "value of a = " << a << ".\n\n";

  cout << "before value assigned to b\n";
  cout << "value of b = " << b << ".\n";
  //"+= is a shorthand operator to divide a variable by constant.\n\n"
  b /= 4;
  cout << "after value assigned to b\n";
  cout << "value of b = " << b << ".\n\n";

  cout << "before value assigned to a\n";
  cout << "value of a = " << a << ".\n";
  //"-= is a shorthand operator to multiple a variable by constant.\n\n"
  a *= 3;
  cout << "after value assigned to a\n";
  cout << "value of a = " << a << ".\n\n";
}