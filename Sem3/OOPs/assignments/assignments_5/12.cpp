// Write a C++ program to take a value from user and check the number is armstrong or not, If
// not than raise an exception.

#include <iostream>

using namespace std;

int main()
{

  int total = 0, number;
  cout << "enter number to find either it is an armstrong number : ";
  cin >> number;
  int temp = number;
  while (number > 0)
  {
    int num = number % 10;
    total += (num * num * num);
    number /= 10;
  }
  // 1X1X1+5X5X5+3X3X3=153
  try
  {
    if (temp != total)
    {
      throw runtime_error("Number is not an armstrong number !!");
    }
    cout << "entered number is an armstrong number.";
  }
  catch (const runtime_error &e)
  {
    cout << e.what();
  }
  return 0;
}