#include <iostream>

using namespace std;

class MaxFrom3NumbersUsingTernary
{
public:
  int a, b, c;
  int maxFrom3NumbersUsingTernary()
  {
    return (a > b) ? ((a > c) ? 1 : 3) : ((b > c) ? 2 : 3);
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
  int ans = ter.maxFrom3NumbersUsingTernary();
  if (ans == 1)
  {
    cout << "value of a is max from all the numbers entered\n";
  }
  else if (ans == 2)
  {
    cout << "value of b is max from all the numbers entered\n";
  }
  else
  {
    cout << "value of c is max from all the numbers entered\n";
  }
}
