#include <iostream>

using namespace std;

class MaxFrom3Numbers
{
public:
  int maxFrom3Numbers(int a, int b, int c)
  {
    if (a > b)
    {
      if (a > c)
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
      if (b > c)
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
  MaxFrom3Numbers obj;
  int a, b, c;

  cout << "enter value of a :";
  cin >> a;

  cout << "enter value of b :";
  cin >> b;

  cout << "enter value of c :";
  cin >> c;
  int ans = obj.maxFrom3Numbers(a, b, c);
  if (ans == 1)
  {
    cout << "a is greater than every number entered !";
  }
  else if (ans == 2)
  {
    cout << "b is greater than every number entered !";
  }
  else
  {
    cout << "c is greater than every number entered !";
  }
}