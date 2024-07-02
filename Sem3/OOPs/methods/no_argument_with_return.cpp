#include <iostream>

using namespace std;

class OddAndEven
{

public:
  int number;
  int findEvenAndOdd()
  {
    if (number % 2 == 0)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
};

int main()
{
  OddAndEven obj1;
  cout << "enter number to find either even or odd : ";
  cin >> obj1.number;
  cout<<"\n\n";
  if (obj1.findEvenAndOdd() == 1)
  {
    cout << "Entered number is Even Number!!";
  }
  else
  {
    cout << "Entered number is Odd Number!!";
  }

  return 0;
  return 0;
}