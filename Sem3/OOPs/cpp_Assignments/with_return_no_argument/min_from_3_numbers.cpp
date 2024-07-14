#include <iostream>

using namespace std;

class MinFrom3Numbers
{
public:
  int a, b, c;
  int minFrom3Numbers()
  {
    if (a < b)
    {
      if (a < c)
      {
        return 1;
      }
      else
      {
        return 3;
      }
    }
    else
    {
      if (b < c)
      {
        return 2;
      }
      else
      {
        return 3;
      }
    }
  }
};

int main()
{
  MinFrom3Numbers obj;

  cout << "enter value of a :";
  cin >> obj.a;

  cout << "enter value of b :";
  cin >> obj.b;

  cout << "enter value of c :";
  cin >> obj.c;
  int ans = obj.minFrom3Numbers();
  if (ans == 1)
  {
    cout << "a is minimum than every number entered !";
  }
  else if (ans == 2)
  {
    cout << "b is minimum than every number entered !";
  }
  else
  {
    cout << "c is minimum than every number entered !";
  }
}