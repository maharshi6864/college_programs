// Write a Program with function to Check Whether a Number Is a Palindrome or Not.

#include <iostream>

using namespace std;

int checkPalindromNumber(int number)
{
  int total = 0;
  int temp = number;
  while (number > 0)
  {
    int num = number % 10;
    total = (total * 10) + num;
    number /= 10;
  }
  if (temp == total)
  {
    return 1;
  }
  return 0;
}

int main()
{
  int number;
  cout << "enter number to find either it is palindrom number : ";
  cin >> number;
  if (checkPalindromNumber(number) == 1)
  {
    cout << "entered number is a palindrom number.";
  }
  else
  {
    cout << "entered number is not a palindrom number.";
  }
}