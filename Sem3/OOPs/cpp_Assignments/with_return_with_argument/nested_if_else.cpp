#include <iostream>
using namespace std;

class NestedIfElse
{
public:
    int checkEnteredInteger(int num)
  {
    if (num != 0)
    {

      if (num > 0)
      {
        return 1;
      }
      else
      {
        return 2;
      }
    }
    else
    {
      return 3;
    }
  }
};

int main()
{

  NestedIfElse nestedIfElse;
  int num;
  cout << "Enter an integer: ";
  cin >> num;

  int ans = nestedIfElse.checkEnteredInteger(num);
  if (ans == 1)
  {
    cout << "The number is positive." << endl;
  }
  else if (ans == 2)
  {
    cout << "The number is negative." << endl;
  }
  else
  {
    cout << "The number is 0 and it is neither positive nor negative." << endl;
  }
  return 0;
}