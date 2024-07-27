#include <iostream>

using namespace std;

class BitwiseOperator
{
public:
  void andOperator(int x, int y)
  {
    int z1 = x & y;
    cout << "x & y = " << z1;
  }

  void orOperator(int x, int y)
  {
    int z2 = x | y;
    cout << "x | y = " << z2;
  }

  void xorOperator(int x, int y)
  {
    int z3 = x ^ y;
    cout << "x ^ y = " << z3;
  }

  void notOperator(int x)
  {
    int z4 = ~x;
    cout << "~x = " << z4;
  }
};

int main()
{
  BitwiseOperator bit;
  int x, y;
  cout << "enter value of x :";
  cin >> x;

  cout << "enter value of y :";
  cin >> y;

  bit.andOperator(x, y);
  bit.notOperator(x);
  bit.orOperator(x, y);
  bit.xorOperator(x, y);

  return 0;
}