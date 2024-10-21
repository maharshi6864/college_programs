#include <iostream>

using namespace std;

int main()
{

  int dividend, divisor;

  cout << "enter dividend : ";
  cin >> dividend;

  cout << "enter divisor : ";
  cin >> divisor;

  try
  {
    if (divisor == 0)
    {
      throw runtime_error("Invalid Input!");
    }

    int q = dividend / divisor;
    cout << "Quitont is : " << q;
  }
  catch (const runtime_error &e)
  {
    cout << e.what();
  }

  return 0;
}