#include <iostream>

using namespace std;

class MaxFrom2Numbers
{
public:
  int a, b;
  int maxFrom2Numbers()
  {
    if (a > b)
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
  MaxFrom2Numbers obj;

  cout << "enter value of a :";
  cin >> obj.a;

  cout << "enter value of b :";
  cin >> obj.b;

  if (obj.maxFrom2Numbers())
  {
    cout << "value of a is greater than b.";
  }
  else
  {
    cout << "value of b is greater than a.";
  }
}