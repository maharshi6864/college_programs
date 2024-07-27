// write a c++ program that declares and calls the function to perform various mathematical
// functions(Add, Subtract, Multiply, divide)

#include <iostream>

using namespace std;

class ArithmeticOperators
{
public:
  int addition(int a, int b)
  {
    return a + b;
  }

  int subtraction(int a, int b)
  {
    return a - b;
  }
  int multiplication(int a, int b)
  {
    return a * b;
  }
  int division(int a, int b)
  {
    return a / b;
  }

  int modulas(int a, int b)
  {
    return a % b;
  }
};

int main()
{
  ArithmeticOperators arith;
  int a, b;
  cout << "enter value of a  :";
  cin >> a;

  cout << "enter value of b  :";
  cin >> b;

  cout << "addition of a and b is : " << arith.addition(a, b) << "\n";
  cout << "subtraction of a and b is : " << arith.subtraction(a, b) << "\n";
  cout << "multiplication of a and b is : " << arith.multiplication(a, b) << "\n";
  cout << "divison of a and b is : " << arith.division(a, b) << "\n";
  cout << "modulas of a and b is : " << arith.modulas(a, b) << "\n";
}