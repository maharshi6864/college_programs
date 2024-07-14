#include <iostream>

using namespace std;

class ArithmeticOperators
{
public:
  void addition(int a, int b)
  {
    cout << "addition of a and b is :" << a + b << "\n";
  }

  void subtraction(int a, int b)
  {
    cout << "subtraction of a and b is :" << a - b << "\n";
  }
  void multiplication(int a, int b)
  {
    cout << "multiplication of a and b is :" << a * b << "\n";
  }
  void division(int a, int b)
  {
    cout << "division of a and b is :" << a / b << "\n";
  }

  void modulas(int a, int b)
  {
    cout << "modulas of a and b is :" << a % b;
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

  arith.addition(a, b);
  arith.subtraction(a, b);
  arith.multiplication(a, b);
  arith.division(a, b);
  arith.modulas(a, b);
}