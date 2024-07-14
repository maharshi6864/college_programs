#include <iostream>
using namespace std;

class NestedIfElse
{
public:
  void checkEnteredInteger(int num)
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
  int num;

  cout << "Enter an integer: ";
  cin >> num;

  nestedIfElse.checkEnteredInteger(num);
  return 0;
}