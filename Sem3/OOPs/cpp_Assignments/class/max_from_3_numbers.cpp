#include <iostream>

using namespace std;

class MaxFrom3Numbers
{
public:
  int a, b, c;
};

int main()
{
  MaxFrom3Numbers obj;

  cout << "enter value of a :";
  cin >> obj.a;

  cout << "enter value of b :";
  cin >> obj.b;

  cout << "enter value of c :";
  cin >> obj.c;

  if (obj.a > obj.b)
  {
    if (obj.a > obj.c)
    {
      cout << "a is greater than every number entered !";
    }
    else
    {
      cout << "c is greater than every number entered !";
    }
  }
  else
  {
    if (obj.b > obj.c)
    {
      cout << "b is greater than every number entered !";
    }
    else
    {
      cout << "c is greater than every number entered !";
    }
  }
}