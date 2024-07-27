#include <iostream>

using namespace std;

class ArithmeticOperators
{
public:
  int a;
  int b;
  void addition()
  {
    cout << "addition of a and b is :" << a + b << "\n";
  }

  void subtraction()
  {
    cout << "subtraction of a and b is :" << a - b << "\n";
  }
  void multiplication()
  {
    cout << "multiplication of a and b is :" << a * b << "\n";
  }
  void division()
  {
    cout << "division of a and b is :" << a / b << "\n";
  }

  void modulas()
  {
    cout << "modulas of a and b is :" << a % b;
  }
};

int main()
{
  ArithmeticOperators arith;

  cout << "enter value of a  :";
  cin >> arith.a;

  cout << "enter value of b  :";
  cin >> arith.b;

  arith.addition();
  arith.subtraction();
  arith.multiplication();
  arith.division();
  arith.modulas();
}