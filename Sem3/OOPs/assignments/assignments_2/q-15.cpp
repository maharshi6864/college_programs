// Write a C++ Program to find the cube of a number using Inline Function

#include <iostream>

using namespace std;

inline int cubeOfNumber(int n)
{
  return n * n * n;
}
// In inline function there must be a return data type. void is not acceptable.
int main()
{
  int number = 0;
  cout << "Enter number to find its cube using inline function : ";
  cin >> number;
  cout << "Cube of number " << number << " : " << cubeOfNumber(number);
}