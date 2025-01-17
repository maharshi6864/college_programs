#include <iostream>

using namespace std;

void display2dArrayElements(int **arr, int rowSize, int colSize)
{
  cout << "Displaying 2d array elements." << endl;

  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize; j++)
    {
      cout << "" << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{

  int rowSize = 3;
  int colSize = 3;

  int **arr = new int *[3];

  for (int i = 0; i < rowSize; i++)
  {
    arr[i] = new int[3];
    for (int j = 0; j < colSize; j++)
    {
      cin >> arr[i][j];
    }
  }

  display2dArrayElements(arr, rowSize, colSize);
  return 0;
}