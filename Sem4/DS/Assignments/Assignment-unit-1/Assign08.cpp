#include <iostream>

using namespace std;

int main()
{
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
    for (int j = 0; j < i; j++)
    {
      if (arr[i][j] != 0)
      {
        cout << "Matrix is not a upper triangular" << endl;
        return 0;
      }
    }
  }
  cout << "Matrix is a upper traingular matrix" << endl;
  return 0;
}