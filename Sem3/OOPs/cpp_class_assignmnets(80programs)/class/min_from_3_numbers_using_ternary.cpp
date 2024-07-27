#include <iostream>

using namespace std;

class MinFrom3NumbersUsingTernary
{
public:
  int a, b, c;
};

int main()
{
  MinFrom3NumbersUsingTernary ter;
  cout << "enter value of a : ";
  cin >> ter.a;

  cout << "enter value of b : ";
  cin >> ter.b;

  cout << "enter value of c : ";
  cin >> ter.c;

  (ter.a < ter.b) ? ((ter.a < ter.c) ? "value of a is max from all the numbers entered\n" : "value of c is max from all the numbers entered\n") : ((ter.b < ter.c) ? "value of b is max from all the numbers entered\n" : "value of c is max from all the numbers entered\n");
}
