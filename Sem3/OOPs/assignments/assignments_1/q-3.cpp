// Write a C++ program using Switch statement example to generate days of the week.

#include <iostream>

using namespace std;

int main()
{
  int day;
  cout << "Enter number to get the week  : ";
  cin >> day;

  switch (day)
  {
  case 1:
    cout << "Sunday!";
    break;
  case 2:
    cout << "Monday!";
    break;
  case 3:
    cout << "Tuesday!";
    break;
  case 4:
    cout << "Wednesday!";
    break;
  case 5:
    cout << "Thuesday!";
    break;
  case 6:
    cout << "Friday!";
    break;
  case 7:
    cout << "Saturday !";
    break;
  default:
    cout << "invalid input";
    break;
  }
}