#include <iostream>

using namespace std;

class MinFrom3Numbers
{
public:
  int a, b, c;
  void minFrom3Numbers()
  {
    if (a < b)
    {
      if (a < c)
      {
        cout << "a is minimum than every number entered !";
      }
      else
      {
        cout << "c is minimum than every number entered !";
      }
    }
    else
    {
      if (b < c)
      {
        cout << "b is minimum than every number entered !";
      }
      else
      {
        cout << "c is minimum than every number entered !";
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

  obj.minFrom3Numbers();
}