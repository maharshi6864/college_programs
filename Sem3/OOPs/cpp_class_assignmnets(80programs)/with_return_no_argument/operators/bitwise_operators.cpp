#include <iostream>

using namespace std;

class BitwiseOperator
{
public:
  int x, y;

  int andOperator()
  {
    return x & y;
  }

  int orOperator()
  {
    return x | y;
  }

  int xorOperator()
  {
    return x ^ y;
  }

  int notOperator()
  {
    return ~x;
  }
};

int main()
{
  BitwiseOperator bit;

  cout << "enter value of x :";
  cin >> bit.x;

  cout << "enter value of y :";
  cin >> bit.y;

  cout << "x & y = " << bit.andOperator();
  cout << "x | y = " << bit.orOperator();
  cout << "~x = " << bit.orOperator();
  cout << "x ^ y = " << bit.xorOperator();

  return 0;
}