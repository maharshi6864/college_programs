#include <iostream>

using namespace std;

class MaxFrom2NumbersUsingTernary
{
public:
  void maxFrom2NumbersUsingTernary(int a, int b)

  {
    (a > b) ? cout << "value of a is greater than b \n" : cout << "value of b is greater than a \n";
  }
};

int main()
{
  MaxFrom2NumbersUsingTernary ter;
  int a, b;
  cout << "enter value of a : ";
  cin >> a;

  cout << "enter value of b : ";
  cin >> b;

  ter.maxFrom2NumbersUsingTernary(a, b);
}
