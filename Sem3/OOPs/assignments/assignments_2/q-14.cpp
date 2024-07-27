// . Write a C++ Program to generate a simple calculator using constructor.
#include <iostream>

using namespace std;

class ArithmeticOperators
{
public:
  ArithmeticOperators(int a, int b)
  {
    cout << "addition of a and b is :" << a + b;
  }

  ArithmeticOperators(double a, double b)
  {
    cout << "subtraction of a and b is :" << a - b;
  }
  ArithmeticOperators(int a, double b)
  {
    cout << "multiplication of a and b is :" << a * b;
  }
  ArithmeticOperators(float a, double b)
  {
    cout << "division of a and b is :" << a / b;
  }

  ArithmeticOperators(double a, int b)
  {
    cout << "modulas of b and a is :" << b % ((int)a);
  }
};

int main()
{
  ArithmeticOperators arith(10.10f, 10);
  ArithmeticOperators arith(10.10f, 10);
  ArithmeticOperators arith(10.10f, 10);
  ArithmeticOperators arith(10.10f, 10);
  ArithmeticOperators arith(10.10f, 10);
}