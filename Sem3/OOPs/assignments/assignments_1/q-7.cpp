// Write a C++ program to check whether the integer entered by user is positive, negative or
// zero using nested if-else.

#include <iostream>

using namespace std;

int main()
{
  int number;
  cout << "Enter intergral value to check either positive or negative or neutral : ";
  cin >> number;

  if (number > 0)
  {
    cout << "The entered number is positive.";
  }
  else if (number < 0)
  {
    cout << "The entered number is negative.";
  }
  else
  {
    cout << "The entered number is newtural.";
  }
}