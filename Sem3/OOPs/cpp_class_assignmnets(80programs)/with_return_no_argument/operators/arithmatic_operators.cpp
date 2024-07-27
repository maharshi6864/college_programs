#include <iostream>

using namespace std;

class ArithmeticOperators
{
public:
  int a;
  int b;
  int addition()
  {
    return a + b;
  }

  int subtraction()
  {
    return a - b;
  }
  int multiplication()
  {
    return a * b;
  }
  int division()
  {
    return a / b;
  }

  int modulas()
  {
    return a % b;
  }
};

int main()
{
  ArithmeticOperators arith;

  cout << "enter value of a  :";
  cin >> arith.a;

  cout << "enter value of b  :";
  cin >> arith.b;

  cout << "addition of a and b is : " << arith.addition() << "\n";
  cout << "subtraction of a and b is : " << arith.subtraction() << "\n";
  cout << "multiplication of a and b is : " << arith.multiplication() << "\n";
  cout << "divison of a and b is : " << arith.division() << "\n";
  cout << "modulas of a and b is : " << arith.modulas() << "\n";
}