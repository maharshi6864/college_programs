// Write a C++ program to use arithmetic operators like +,-,/, %.

#include <iostream>

using namespace std;

// Arithmatic Operators
int main()
{
  int a, b;

  cout << "enter value of a : ";
  cin >> a;

  cout << "enter value of b : ";
  cin >> b;

  cout << "\n\nAddition of a and b is :" << a + b;
  cout << "\n\nSubration of a from b is :" << a - b;

  cout << "\n\nDivision of a and b is :" << a / b;
  cout << "\n\nMultiplication of a and b is :" << a * b;

  cout << "\n\nModulas of a and b is :" << a % b;

  return 0;
}