#include <iostream>

using namespace std;

class MinFrom3NumbersUsingTernary
{
public:
  int minFrom3NumbersUsingTernary(int a, int b, int c)
  {
    return (a < b) ? ((a < c) ? 1 : 3) : ((b < c) ? 2 : 3);
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
  int ans = ter.minFrom3NumbersUsingTernary(a, b, c);
  if (ans == 1)
  {
    cout << "value of a is min from all the numbers entered\n";
  }
  else if (ans == 2)
  {
    cout << "value of b is min from all the numbers entered\n";
  }
  else
  {
    cout << "value of c is min from all the numbers entered\n";
  }
}
