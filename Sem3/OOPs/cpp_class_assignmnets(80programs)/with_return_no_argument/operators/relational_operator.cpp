#include <iostream>

using namespace std;

class RelationalOperatos
{

public:
  int x, y;

  int greaterThan()
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

  int lessThan()
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

  int equalTo()
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

  int lessThanEqualTo()
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

  int greaterThanEqual()
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

  cout << "enter value of y : ";
  cin >> rel.x;

  cout << "enter value of x : ";
  cin >> rel.y;

  if (rel.equalTo())
  {
    cout << "x is equal to y\n";
  }
  else
  {
    cout << "x is not equal to y\n";
  }
  if (rel.lessThan())
  {
    cout << "x is less than y\n";
  }
  else
  {
    cout << "x is not less than y\n";
  }

  if (rel.lessThanEqualTo())
  {
    cout << "x is less than or equal to y\n";
  }
  else
  {
    cout << "x is neither less than y nor equal to y\n";
  }

  if (rel.greaterThan())
  {
    cout << "x is greater than y\n";
  }
  else
  {
    cout << "x is not greater than y\n";
  }

  if (rel.greaterThanEqual())
  {
    cout << "x is greater than or equal to y\n";
  }
  else
  {
    cout << "x is neither greater than y nor equal to y\n";
  }
}