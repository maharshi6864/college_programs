#include <iostream>

using namespace std;

class MinFrom2NumbersUsingTernary
{
public:
  int a, b;
  void minFrom2NumbersUsingTernary()

  {
    (a < b) ? cout << "value of a is less than b \n" : cout << "value of b is less than a \n";
  }
};

int main()
{
  MinFrom2NumbersUsingTernary ter;
  cout << "enter value of a : ";
  cin >> ter.a;

  cout << "enter value of b : ";
  cin >> ter.b;

  ter.minFrom2NumbersUsingTernary();
}
