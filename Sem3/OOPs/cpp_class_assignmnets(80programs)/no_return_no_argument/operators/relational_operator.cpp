#include <iostream>

using namespace std;

class RelationalOperatos
{

public:
  int x, y;

  void greaterThan()
  {
    // greater than operator
    if (x > y)
    {
      cout << "x is greater than y\n";
    }
    else
    {
      cout << "x is not greater than y\n";
    }
  }

  void lessThan()
  {
    if (x < y)
    {
      cout << "x is less than y\n";
    }
    else
    {
      cout << "x is not less than y\n";
    }
  }

  void equalTo()
  {
    if (x == y)
    {
      cout << "x is equal to y\n";
    }
    else
    {
      cout << "x is not equal to y\n";
    }
  }

  void lessThanEqualTo()
  {
    if (x < y)
    {
      cout << "x is less than or equal to y\n";
    }
    else
    {
      cout << "x is neither less than y nor equal to y\n";
    }
  }

  void greaterThanEqual()
  {
    if (x > y)
    {
      cout << "x is greater than or equal to y\n";
    }
    else
    {
      cout << "x is neither greater than y nor equal to y\n";
    }
  }
};

// Relational operators
int main()
{
  RelationalOperatos rel;

  cout << "enter value of y : ";
  cin >> rel.x;

  cout << "enter value of x : ";
  cin >> rel.y;

  rel.equalTo();
  rel.lessThan();
  rel.lessThanEqualTo();
  rel.greaterThan();
  rel.greaterThanEqual();
}