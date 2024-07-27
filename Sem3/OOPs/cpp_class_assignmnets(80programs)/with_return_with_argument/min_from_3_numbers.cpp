#include <iostream>

using namespace std;

class MinFrom3Numbers
{
public:
  int minFrom3Numbers(int a, int b, int c)
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
  int a, b, c;

  cout << "enter value of a :";
  cin >> a;

  cout << "enter value of b :";
  cin >> b;

  cout << "enter value of c :";
  cin >> c;
  int ans = obj.minFrom3Numbers(a, b, c);
  if (ans == 1)
  {
    cout << "a is Minimum than every number entered !";
  }
  else if (ans == 2)
  {
    cout << "b is Minimum than every number entered !";
  }
  else
  {
    cout << "c is Minimum than every number entered !";
  }
}