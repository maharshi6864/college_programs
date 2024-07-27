// 1. Sum of Digit
#include <iostream>

using namespace std;

int main()
{
  int total = 0, number;
  cout << "enter number to find its sum : ";
  cin >> number;
  while (number > 0)
  {
    total += number % 10;
    number /= 10;
  }
  cout << "Total of number is : " << total;
}