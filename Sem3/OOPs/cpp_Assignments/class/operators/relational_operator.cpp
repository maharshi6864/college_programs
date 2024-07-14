#include <iostream>

using namespace std;

class RelationalOperatos
{

public:
  int x, y;
};

// Relational operators
int main()
{
  RelationalOperatos rel;

  cout << "enter value of y : ";
  cin >> rel.x;

  cout << "enter value of rel.x: ";
  cin >> rel.y;

  // greater than operator
  if (rel.x > rel.y)
  {
    cout << "x is greater than y\n";
  }
  else
  {
    cout << "x is not greater than y\n";
  }

  if (rel.x < rel.y)
  {
    cout << "x is less than y\n";
  }
  else
  {
    cout << "x is not less than y\n";
  }

  if (rel.x == rel.y)
  {
    cout << "x is equal to y\n";
  }
  else
  {
    cout << "x is not equal to y\n";
  }

  if (rel.x < rel.y)
  {
    cout << "x is less than or equal to y\n";
  }
  else
  {
    cout << "x is neither less than y nor equal to y\n";
  }

  if (rel.x > rel.y)
  {
    cout << "x is greater than or equal to y\n";
  }
  else
  {
    cout << "x is neither greater than y nor equal to y\n";
  }
}