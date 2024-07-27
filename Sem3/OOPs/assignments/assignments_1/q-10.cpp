// Write a C++ program that will ask user to input two numbers and check whether values are
// equal or not using assignment operator

#include <iostream>

using namespace std;

int main()
{
  int num1, num2;
  cout << "enter value of number 1 :";
  cin >> num1;
  cout << "enter value of number 2 :";
  cin >> num2;

  if (num1 == num2)
  {
    cout << "Number 1 is equal to number 2";
  }
  else
  {
    cout << "Number 1 is not equal to number 2";
  }
}