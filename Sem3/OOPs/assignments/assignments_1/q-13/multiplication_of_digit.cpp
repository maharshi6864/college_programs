// 4. Multiplication of Digit
#include <iostream>

using namespace std;

int main()
{
  int total = 1, number;
  cout << "enter number to find its multiplication : ";
  cin >> number;
  while (number > 0)
  {
    total *= number % 10;
    number /= 10;
  }
  cout << "Multiplication of number is : " << total;
}