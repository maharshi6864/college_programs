#include <iostream>

using namespace std;

int main()
{
  double balance;

  long accountNumber;

  double withdraw;

  cout << "enter balance  : ";
  cin >> balance;

  cout << "enter account number : ";
  cin >> accountNumber;

  while (true)
  {
    try
    {

      cout << "enter amount to withdraw  : ";
      cin >> withdraw;

      if (withdraw > balance || withdraw < 0)
      {
        throw runtime_error("Withdrawn amount is greater than balance amount");
      }

      cout << "Amout Withdrawn successfully !!" << withdraw;
      break;
    }
    catch (const runtime_error &e)
    {
      cout << e.what() << '\n';
    }
  }

  return 0;
}
