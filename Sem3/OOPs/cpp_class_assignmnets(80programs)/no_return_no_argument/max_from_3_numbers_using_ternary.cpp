#include <iostream>

using namespace std;

class MaxFrom3NumbersUsingTernary
{
public:
  int a, b, c;
  void maxFrom3NumbersUsingTernary()

  {
    (a > b) ? ((a > c) ? "value of a is max from all the numbers entered\n" : "value of c is max from all the numbers entered\n") : ((b > c) ? "value of b is max from all the numbers entered\n" : "value of c is max from all the numbers entered\n");
  }
};

int main()
{
  MaxFrom3NumbersUsingTernary ter;
  cout << "enter value of a : ";
  cin >> ter.a;

  cout << "enter value of b : ";
  cin >> ter.b;

  cout << "enter value of c : ";
  cin >> ter.c;

  ter.maxFrom3NumbersUsingTernary();
}
