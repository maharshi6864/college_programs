#include <iostream>

using namespace std;

class Check
{

public:
  void example()
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
  }
};

int main()
{
  Check che;
  che.example();
  return 0;
}