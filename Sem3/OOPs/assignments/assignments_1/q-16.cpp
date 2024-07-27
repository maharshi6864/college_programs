// Write a C++ Program to print following pyramid
// ********
// * *
// * *
// * *
// ********
#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "enter number of layers";
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    if (i == 0 || i == n)
    {
      for (int j = 0; j <= n; j++)
      {
        cout << "*";
      }
    }
    else
    {
      for (int j = 0; j <= n; j++)
      {
        if (j == 0 || j == n)
        {
          cout << "*";
        }
        else
        {
          cout << " ";
        }
      }
    }
    cout << endl;
  }
}