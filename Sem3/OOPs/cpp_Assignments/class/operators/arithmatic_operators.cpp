#include <iostream>

using namespace std;

class ArithmeticOperators
{
public:
  int a;
  int b;
};

int main()
{
  ArithmeticOperators arith;

  cout << "enter value of a  :";
  cin >> arith.a;

  cout << "enter value of b  :";
  cin >> arith.b;
  cout << "addition of a and b is :" << arith.a + arith.b << "\n";

  cout << "subtraction of a and b is :" << arith.a - arith.b << "\n";

  cout << "multiplication of a and b is :" << arith.a * arith.b << "\n";

  cout << "division of a and b is :" << arith.a / arith.b << "\n";

  cout << "modulas of a and b is :" << arith.a % arith.b;
}