#include <iostream>

using namespace std;

class MinFrom2Numbers
{
public:
  int minFrom2Numbers(int a, int b)
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
  int a, b;
  cout << "enter value of a :";
  cin >> a;

  cout << "enter value of b :";
  cin >> b;

  if (obj.minFrom2Numbers(a, b))
  {
    cout << "value of a is less than b.";
  }
  else
  {
    cout << "value of b is less than a.";
  }
}