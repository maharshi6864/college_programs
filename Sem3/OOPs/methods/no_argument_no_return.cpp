#include <iostream>

using namespace std;

class OddAndEven
{

public:
  int number;

  void findEvenAndOdd()
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
  cout << "enter number to find either even or odd : ";
  cin >> obj1.number;
  cout<<"\n\n";
  obj1.findEvenAndOdd();
  return 0;
}