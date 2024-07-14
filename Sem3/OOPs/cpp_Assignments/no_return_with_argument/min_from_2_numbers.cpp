#include <iostream>

using namespace std;

class MinFrom2Numbers
{
public:
  void minFrom2Numbers(int a, int b)
  {
    if (a < b)
    {
      cout << "value of a is less than b.";
    }
    else
    {
      cout << "value of b is less than a.";
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

  obj.minFrom2Numbers(a, b);
}