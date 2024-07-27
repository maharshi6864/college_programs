// Write a C++ Program to print multiplication table.

#include <iostream>

using namespace std;

int main()
{

  int number;
  cout << "Enter number to print its multiplication table : ";
  cin >> number;
  for (int i = 1; i <= 10; i++)
  {
    cout << number << " X " << i << " = " << number * i << endl;
  }
}