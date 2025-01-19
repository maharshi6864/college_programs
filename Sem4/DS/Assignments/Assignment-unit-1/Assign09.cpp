#include <iostream>

using namespace std;

int main()
{
  int arr[3][3] = {{1, 0, 0}, {1, 1, 0}, {1, 1, 1}};

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
    for (int j = i + 1; j < 3; j++)
    {
      if (arr[i][j] != 0)
      {
        cout << "Matrix is not a lower triangular" << endl;
        return 0;
      }
    }
  }
  cout << "Matrix is a lower traingular matrix" << endl;
  return 0;
}