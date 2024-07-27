#include <iostream>

using namespace std;

class LogicalOperators
{
public:
  int addOperator(int a, int b, int c)
  {
    if (a == b && c == b)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }

  int orOperator(int a, int b, int c)
  {
    if (a == b || c == b)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }

  int notOperator(int a, int b)
  {
    if (!(a == b))
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
};

int main()
{
  LogicalOperators logi;
  int a, b, c;
  cout << "enter value of a :";
  cin >> a;

  cout << "enter value of b :";
  cin >> b;

  cout << "enter value of c :";
  cin >> c;

  if (logi.addOperator(a, b, c))
  {
    cout << "value of a is equal to b and value of c is equal to b.\n";
  }
  else
  {
    cout << "Either value of a is not equal to b or value of c is not equal to b.\n";
  }
  if (logi.orOperator(a, b, c))
  {
    cout << "Either value of a is equal to b or value of c is equal to b.\n";
  }
  else
  {
    cout << "Neither value of a is not equal to b nor value of c is not equal to b.\n";
  }
  if (logi.notOperator(a, b))
  {
    cout << "value of a and b is not equal.\n";
  }
  else
  {
    cout << "value of a and b is equal.\n";
  }
}