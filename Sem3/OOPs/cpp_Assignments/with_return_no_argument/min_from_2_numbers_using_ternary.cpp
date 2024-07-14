#include <iostream>

using namespace std;

class MinFrom2NumbersUsingTernary
{
public:
  int a, b;
  int minFrom2NumbersUsingTernary()
  {
    return (a < b) ? 1 : 0;
  }
};

int main()
{
  MinFrom2NumbersUsingTernary ter;

  cout << "enter value of a : ";
  cin >> ter.a;

  cout << "enter value of b : ";
  cin >> ter.b;

  if (ter.minFrom2NumbersUsingTernary())
  {
    cout << "value of a is less than b.";
  }
  else
  {
    cout << "value of b is less than a.";
  }
}
