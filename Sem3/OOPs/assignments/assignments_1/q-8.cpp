//  Write a C++ program to find greatest number between 3 number using if-else-if statements.

#include <iostream>

using namespace std;

int main()
{
  int a, b, c;

  cout << "enter value of a :";
  cin >> a;

  cout << "enter value of b :";
  cin >> b;

  cout << "enter value of c :";
  cin >> c;

  if (a > b)
    if (a > c)
    {
      cout << "a is greater than every number entered !";
    }
    else
    {
      cout << "c is greater than every number entered !";
    }

  else
  {
    if (b > c)
    {
      cout << "b is greater than every number entered !";
    }
    else
    {
      cout << "c is greater than every number entered !";
    }
  }
}