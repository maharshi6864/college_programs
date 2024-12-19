#include <iostream>

using namespace std;

int main()
{

  cout << "Enter number to find positive or negative using ternary operator : ";
  int num;
  cin >> num;

  num > 0 ? cout << "Entered number is positive" << endl : cout << "Entered number is negative" << endl;

  cout << "Enter number to find positive or negative using simple if else : ";
  num;
  cin >> num;

  if (num > 0)
  {
    cout << "Entered number is positive" << endl;
  }
  else
  {
    cout << "Entered number is negative" << endl;
  }
}