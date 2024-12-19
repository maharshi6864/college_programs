// Write a C++ Program to find the sum of Numbers using Recursive Function

#include <iostream>

using namespace std;

int sumOfNumber(int n)
{
  if (n > 0)
  {
    return sumOfNumber(n - 1) + n;
  }
  return 0;
}

int main()
{
  int number = 0;
  cout << "Enter number to find its sum : ";
  cin >> number;
  cout << "Sum of number " << number << " : " << sumOfNumber(number);
}
