// write a c+ program to calculate factorial numbers using Recursion
#include <iostream>

using namespace std;

int factorial(int n)
{
  if (n > 0)
  {
    return factorial(n - 1) * n;
  }
  return 1;
}

int main()
{
  int number;
  cout << "enter number to find factorial of it : ";
  cin >> number;
  cout << "Factorial of number " << number << " is : " << factorial(number);
}