#include <iostream>

using namespace std;

class BitwiseOperator
{
public:
  int x, y;

  void andOperator()
  {
    int z1 = x & y;
    cout << "x & y = " << z1;
  }

  void orOperator()
  {
    int z2 = x | y;
    cout << "x | y = " << z2;
  }

  void xorOperator()
  {
    int z3 = x ^ y;
    cout << "x ^ y = " << z3;
  }

  void notOperator()
  {
    int z4 = ~x;
    cout << "~x = " << z4;
  }
};

int main()
{
  BitwiseOperator bit;

  cout << "enter value of x :";
  cin >> bit.x;

  cout << "enter value of y :";
  cin >> bit.y;

  bit.andOperator();
  bit.notOperator();
  bit.orOperator();
  bit.xorOperator();

  return 0;
}