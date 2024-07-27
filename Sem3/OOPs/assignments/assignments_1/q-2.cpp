// Write a C++ program to swap the values of two integers.

#include <iostream>

using namespace std;

int main()
{
  int a, b;

  cout << "enter value of a : ";
  cin >> a;

  cout << "enter value of b : ";
  cin >> b;

  cout << "value of a before swapping values  : " << a << endl;
  cout << "value of b before swapping values  : " << b << endl;

  int temp = a;
  a = b;
  b = temp;

  cout << "value of a after swapping values  : " << a << endl;
  cout << "value of b after swapping values  : " << b << endl;

  return 0;
}