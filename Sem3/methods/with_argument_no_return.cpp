#include <iostream>

using namespace std;

class OddAndEven
{

public:
  void findEvenAndOdd(int number)
  {
    if (number % 2 == 0)
    {
      cout << "Entered Number is Even!!";
    }
    else
    {
      cout << "Entered Number is Odd!!";
    }
  }
};

int main()
{
  OddAndEven obj1;
  int number;
  cout << "enter number to find either even or odd : ";
  cin >> number;
  cout << "\n\n";
  obj1.findEvenAndOdd(number);
  return 0;
}