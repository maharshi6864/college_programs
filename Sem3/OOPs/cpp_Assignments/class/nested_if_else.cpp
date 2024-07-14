#include <iostream>
using namespace std;

class NestedIfElse
{
public:
  int num;
};

int main()
{

  NestedIfElse nestedIfElse;

  cout << "Enter an integer: ";
  cin >> nestedIfElse.num;

  if (nestedIfElse.num != 0)
  {

    if (nestedIfElse.num > 0)
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

  return 0;
}