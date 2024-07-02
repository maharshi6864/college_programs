#include <iostream>

using namespace std;

int main()
{
  int x = 5; // 00000101
  int y = 3; // 00000011

  // AND operator (&)
  int z1 = x & y;
  cout << "x & y = " << z1; // 00000001

  // OR operator (|)
  int z2 = x | y;
  cout << "x | y = " << z2; // 00000111

  // XOR operator (^)
  int z3 = x ^ y;
  cout << "x ^ y = " << z3; // 00000110

  // NOT operator (~)
  int z4 = ~x;
  cout << "~x = " << z4; // 11111010 (bitwise NOT of x)

  return 0;
}