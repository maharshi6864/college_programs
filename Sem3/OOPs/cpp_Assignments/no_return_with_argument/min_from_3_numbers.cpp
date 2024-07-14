#include <iostream>

using namespace std;

class MinFrom3Numbers
{
public:
  void minFrom3Numbers(int a, int b, int c)
  {
    if (a < b)
    {
      if (a < c)
      {
        cout << "a is minmum than every number entered !";
      }
      else
      {
        cout << "c is minmum than every number entered !";
      }
    }
    else
    {
      if (b < c)
      {
        cout << "b is minmum than every number entered !";
      }
      else
      {
        cout << "c is minmum than every number entered !";
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

  obj.minFrom3Numbers(a, b, c);
}