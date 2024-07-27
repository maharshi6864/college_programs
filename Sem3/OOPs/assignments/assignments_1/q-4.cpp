// Write a C++ Program to enter salary and output income tax and net salary

#include <iostream>

using namespace std;

int main()
{
  double salary, taxRate;
  cout << "Enter salary : ";
  cin >> salary;
  cout << "Enter tax rate : ";
  cin >> taxRate;

  double tax = taxRate * salary / 100;

  cout << "Tax on entered salary and tax rate : " << tax << endl;
  cout << "Salary after adding tax : " << salary + tax << endl;
}