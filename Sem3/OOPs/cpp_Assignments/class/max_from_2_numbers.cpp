#include <iostream>

using namespace std;

class MaxFrom2Numbers
{
public:
  int a, b;
};

int main()
{
  MaxFrom2Numbers obj;

  cout << "enter value of a :";
  cin >> obj.a;

  cout << "enter value of b :";
  cin >> obj.b;

  if (obj.a > obj.b)
  {
    cout << "value of a is greater than b.";
  }
  else
  {
    cout << "value of b is greater than a.";
  }
}