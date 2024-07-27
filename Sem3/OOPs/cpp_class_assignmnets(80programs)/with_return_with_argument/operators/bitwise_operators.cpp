#include <iostream>

using namespace std;

class BitwiseOperator
{
public:
  int andOperator(int x, int y)
  {
    return x & y;
  }

  int orOperator(int x, int y)
  {
    return x | y;
  }

  int xorOperator(int x, int y)
  {
    return x ^ y;
  }

  int notOperator(int x)
  {
    return ~x;
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

  cout << "x & y = " << bit.andOperator(x, y);
  cout << "x | y = " << bit.orOperator(x, y);
  cout << "~x = " << bit.notOperator(x);
  cout << "x ^ y = " << bit.xorOperator(x, y);

  return 0;
}