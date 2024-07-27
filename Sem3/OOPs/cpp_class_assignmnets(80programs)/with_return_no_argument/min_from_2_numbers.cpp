#include <iostream>

using namespace std;

class MinFrom2Numbers
{
public:
  int a, b;
  int minFrom2Numbers()
  {
    if (a < b)
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
  MinFrom2Numbers obj;

  cout << "enter value of a :";
  cin >> obj.a;

  cout << "enter value of b :";
  cin >> obj.b;

  if (obj.minFrom2Numbers())
  {
    cout << "value of a is less than b.";
  }
  else
  {
    cout << "value of b is less than a.";
  }
}