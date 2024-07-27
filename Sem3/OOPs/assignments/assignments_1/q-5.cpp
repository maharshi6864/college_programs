// Write a C++ Program to convert days into years and weeks

#include <iostream>

using namespace std;

int main()
{
  int days;
  cout << "Enter number of days : ";
  cin >> days;

  int years = days / 365;
  int weeks = days / 7;

  cout << "Number of years for days " << days << " will be : " << years << endl;
  cout << "Number of weeks for days " << days << " will be : " << weeks << endl;
}
