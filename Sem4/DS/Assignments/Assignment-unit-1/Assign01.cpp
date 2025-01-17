#include <iostream>

using namespace std;

int main()
{
  int arr[3][3] = {{1, 0, 0}, {0, 0, 3}, {0, 0, 2}};

  int rowSize = sizeof(arr) / sizeof(arr[0]);
  int colSize = sizeof(arr[0]) / sizeof(arr[0][0]);
  int totalSize = rowSize * colSize;
  int numberOfZero = 0;

  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize; j++)
    {
      if (arr[i][j] == 0)
      {
        numberOfZero++;
      }
    }
  }

  if (numberOfZero > (totalSize / 2))
  {
    cout << "Matrix is Sparse Matrix !!";
  }
  else
  {
    cout << "Matrix is not Sparse Matrix !!";
  }

  return 0;
}