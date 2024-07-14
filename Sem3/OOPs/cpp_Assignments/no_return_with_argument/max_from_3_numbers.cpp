#include <iostream>

using namespace std;

class MaxFrom3Numbers
{
public:
  void maxFrom3Numbers(int a, int b, int c)
  {
    if (a > b)
    {
      if (a > c)
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
      if (b > c)
      {
        cout << "b is greater than every number entered !";
      }
      else
      {
        cout << "c is greater than every number entered !";
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

  obj.maxFrom3Numbers(a, b, c);
}