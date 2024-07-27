#include <iostream>

using namespace std;

class ArmStrongNumber
{
public:
  ArmStrongNumber(int number)
  {
    int temp = number;
    int answer = 0;
    while (temp != 0)
    {
      int rem = temp % 10;
      answer = answer + (rem * rem * rem);
      temp /= 10;
    }
    if (answer == number)
    {
      cout << "3 digit number " << number << " is an armstrong number.";
    }
    else
    {
      cout << "3 digit number " << number << " is not an armstrong number.";
    }
  }
};

int main()
{
  int number;
  cout << "enter 3 digit number to check either the number is armstrong or not : ";
  cin >> number;
  ArmStrongNumber arm(number);
}