#include <iostream>

using namespace std;

class MaxFrom2Numbers
{
public:
  void maxFrom2Numbers(int a, int b)
  {
    if (a > b)
    {
      cout << "value of a is greater than b.";
    }
    else
    {
      cout << "value of b is greater than a.";
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

  obj.maxFrom2Numbers(a, b);
}