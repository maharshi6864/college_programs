#include <iostream>

using namespace std;

class BitwiseOperator
{
public:
  int x, y;
};

int main()
{
  BitwiseOperator bit;

  cout << "enter value of x :";
  cin >> bit.x;

  cout << "enter value of y :";
  cin >> bit.y;

  int z1 = bit.x & bit.y;
  cout << "x & y = " << z1;

  int z2 = bit.x | bit.y;
  cout << "x | y = " << z2;

  int z3 = bit.x ^ bit.y;
  cout << "x ^ y = " << z3;

  int z4 = ~bit.x;
  cout << "~x = " << z4;

  return 0;
}