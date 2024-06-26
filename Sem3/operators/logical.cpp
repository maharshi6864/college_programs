#include <iostream>

using namespace std;

int main()
{
  int a, b, c;

  cout << "enter value of a : ";
  cin >> a;

  cout << "enter value of b : ";
  cin >> b;

  cout << "enter value of c : ";
  cin >> c;

  if (a > b && a > c)
  {
    cout << "\n\na is greater than b and c.";
  }

  if (a == b || a == c)
  {
    cout << "\n\neither a is equal to b or c is equal to a.";
  }

  if (!(a == b))
  {
    cout << "values of a and b are not equal.";
  }

  return 0;
}