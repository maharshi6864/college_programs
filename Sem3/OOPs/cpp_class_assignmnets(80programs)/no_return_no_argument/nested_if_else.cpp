#include <iostream>
using namespace std;

class NestedIfElse
{
public:
  int num;

  void checkEnteredInteger()
  {
    if (num != 0)
    {

      if (num > 0)
      {
        cout << "The number is positive." << endl;
      }
      else
      {
        cout << "The number is negative." << endl;
      }
    }
    else
    {
      cout << "The number is 0 and it is neither positive nor negative." << endl;
    }
  }
};

int main()
{

  NestedIfElse nestedIfElse;

  cout << "Enter an integer: ";
  cin >> nestedIfElse.num;

  nestedIfElse.checkEnteredInteger();
  return 0;
}