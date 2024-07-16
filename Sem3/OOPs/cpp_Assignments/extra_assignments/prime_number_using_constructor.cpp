#include <iostream>

using namespace std;

class PrimeNumber
{
public:
  PrimeNumber(int number)
  {
    int count = 0;
    for (int i = 1; i < number; i++)
    {
      if (number % i == 0)
      {
        count++;
      }
    }
    if (count == 2)
    {
      cout << number << " is a prime number.";
    }
    else
    {
      cout << number << " is not a prime number.";
    }
  }
};

int main()
{
  int a;
  cout << "enter number to check either it is prime or not: ";
  cin >> a;
  PrimeNumber prime(a);
  return 0;
}