#include <iostream>

using namespace std;

int main()
{
  int sum = 0;
  int arr[3][3] = {{1, 1, 3}, {0, 1, 2}, {0, 0, 1}};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i == j)
      {
        sum += arr[i][j];
      }
    }
  }
  cout << "The sum of diagonal elements are  : " << sum << endl;
  return 0;
}