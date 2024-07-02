// Create a class which will find the simple interest for the entered values.
#include <iostream>

using namespace std;

class SimpleInterest
{
public:
  float principle;
  float interest;
  int months;

  float getSimpleInterest()
  {
    return (principle * interest * (months / 12)) / 100;
  }
};

int main()
{
  SimpleInterest sim1;

  cout << "enter principal amount : ";
  cin >> sim1.principle;

  cout << "enter interest rate : ";
  cin >> sim1.interest;

  cout << "enter number of months : ";
  cin >> sim1.months;

  cout << "\nSimple interest for entered amount, interest rate and for time is " << sim1.getSimpleInterest();
}