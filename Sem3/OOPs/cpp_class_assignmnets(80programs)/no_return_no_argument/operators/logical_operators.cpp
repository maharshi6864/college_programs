#include <iostream>

using namespace std;

class LogicalOperators
{
public:
  int a, b, c;

  void addOperator()
  {
    if (a == b && c == b)
    {
      cout << "value of a is equal to b and value of c is equal to b.\n";
    }
    else
    {
      cout << "Either value of a is not equal to b or value of c is not equal to b.\n";
    }
  }

  void orOperator()
  {
    if (a == b || c == b)
    {
      cout << "Either value of a is equal to b or value of c is equal to b.\n";
    }
    else
    {
      cout << "Neither value of a is not equal to b nor value of c is not equal to b.\n";
    }
  }

  void notOperator()
  {
    if (!(a == b))
    {
      cout << "value of a and b is not equal.\n";
    }
    else
    {
      cout << "value of a and b is equal.\n";
    }
  }
};

int main()
{
  LogicalOperators logi;
  cout << "enter value of a :";
  cin >> logi.a;

  cout << "enter value of b :";
  cin >> logi.b;

  cout << "enter value of c :";
  cin >> logi.c;

  logi.addOperator();
  logi.orOperator();
  logi.notOperator();
}