#include <iostream>

using namespace std;

class MinFrom2NumbersUsingTernary
{
public:
  void minFrom2NumbersUsingTernary(int a, int b)

  {
    (a < b) ? cout << "value of a is less than b \n" : cout << "value of b is less than a \n";
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

  ter.minFrom2NumbersUsingTernary(a, b);
}
