// Write a C++ Program to compute the square of number series till 10.

#include <iostream>

using namespace std;

int main()
{
  for (int i = 1; i <= 10; i++)
  {
    int number = i;
    for (int j = 0; j < 1; j++)
    {
      number *= i;
    }
    cout << "Square of " << i << " is : " << number << endl;
  }
}