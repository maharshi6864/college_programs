#include <iostream>

using namespace std;

class RelationalOperatos
{

public:
  int greaterThan(int x, int y)
  {
    // greater than operator
    if (x > y)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }

  int lessThan(int x, int y)
  {
    if (x < y)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }

  int equalTo(int x, int y)
  {
    if (x == y)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }

  int lessThanEqualTo(int x, int y)
  {
    if (x < y)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }

  int greaterThanEqual(int x, int y)
  {
    if (x > y)
    {
      return 1;
    }
    else
    {
      return 0;
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

  if (rel.equalTo(x, y))
  {
    cout << "x is equal to y\n";
  }
  else
  {
    cout << "x is not equal to y\n";
  }
  if (rel.lessThan(x, y))
  {
    cout << "x is less than y\n";
  }
  else
  {
    cout << "x is not less than y\n";
  }

  if (rel.lessThanEqualTo(x, y))
  {
    cout << "x is less than or equal to y\n";
  }
  else
  {
    cout << "x is neither less than y nor equal to y\n";
  }

  if (rel.greaterThan(x, y))
  {
    cout << "x is greater than y\n";
  }
  else
  {
    cout << "x is not greater than y\n";
  }

  if (rel.greaterThanEqual(x, y))
  {
    cout << "x is greater than or equal to y\n";
  }
  else
  {
    cout << "x is neither greater than y nor equal to y\n";
  }
}