// 3. Palindrome or Not
#include <iostream>

using namespace std;

int main()
{
  int total = 0, number;
  cout << "enter number to find either it is palindrom number : ";
  cin >> number;
  int temp = number;
  while (number > 0)
  {
    int num = number % 10;
    total = (total * 10) + num;
    number /= 10;
  }
  if (temp == total)
  {
    cout << "entered number is a palindrom number.";
  }
  else
  {
    cout << "entered number is not a palindrom number.";
  }
}