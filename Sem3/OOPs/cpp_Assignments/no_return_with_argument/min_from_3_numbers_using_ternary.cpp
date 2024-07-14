#include <iostream>

using namespace std;

class MinFrom3NumbersUsingTernary
{
public:
  void minFrom3NumbersUsingTernary(int a, int b, int c)
  {
    (a < b) ? ((a < c) ? "value of a is max from all the numbers entered\n" : "value of c is max from all the numbers entered\n") : ((b < c) ? "value of b is max from all the numbers entered\n" : "value of c is max from all the numbers entered\n");
  }
};

int main()
{
  MinFrom3NumbersUsingTernary ter;

  int a, b, c;
  cout << "enter value of a : ";
  cin >> a;

  cout << "enter value of b : ";
  cin >> b;

  cout << "enter value of c : ";
  cin >> c;

  ter.minFrom3NumbersUsingTernary(a, b, c);
}
