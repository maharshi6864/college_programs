#include <iostream>

using namespace std;

class MaxFrom2Numbers
{
public:
  int maxFrom2Numbers(int a, int b)
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
  int a, b;
  cout << "enter value of a :";
  cin >> a;

  cout << "enter value of b :";
  cin >> b;

  if (obj.maxFrom2Numbers(a, b))
  {
    cout << "value of a is greater than b.";
  }
  else
  {
    cout << "value of b is greater than a.";
  }
}