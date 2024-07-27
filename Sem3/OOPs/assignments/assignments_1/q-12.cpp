// Write a C++ program to check minimum and maximum of two numbers using Ternary
// operator

#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cout << "enter value of a : ";
  cin >> a;

  cout << "enter value of b : ";
  cin >> b;

  (a > b) ? cout << "value of a is greater than b \n" : cout << "value of b is greater than a \n";
}
