#include <iostream>

using namespace std;

class MinFrom2NumbersUsingTernary
{
public:
  int minFrom2NumbersUsingTernary(int a, int b)
  {
    return (a < b) ? 1 : 0;
  }
};

int main()
{
  MinFrom2NumbersUsingTernary ter;
  int a, b;
  cout << "enter value of a : ";
  cin >> a;

  cout << "enter value of b : ";
  cin >> b;

  if (ter.minFrom2NumbersUsingTernary(a, b))
  {
    cout << "value of a is less than b.";
  }
  else
  {
    cout << "value of b is less than a.";
  }
}
