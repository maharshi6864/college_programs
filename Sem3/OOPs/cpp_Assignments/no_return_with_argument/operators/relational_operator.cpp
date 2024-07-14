#include <iostream>

using namespace std;

class RelationalOperatos
{

public:
  void greaterThan(int x, int y)
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

  void lessThan(int x, int y)
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

  void equalTo(int x, int y)
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

  void lessThanEqualTo(int x, int y)
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

  void greaterThanEqual(int x, int y)
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
  int x, y;

  cout << "enter value of y : ";
  cin >> x;

  cout << "enter value of x : ";
  cin >> y;

  rel.equalTo(x, y);
  rel.lessThan(x, y);
  rel.lessThanEqualTo(x, y);
  rel.greaterThan(x, y);
  rel.greaterThanEqual(x, y);
}