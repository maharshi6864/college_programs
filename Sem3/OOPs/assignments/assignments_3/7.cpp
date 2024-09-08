#include <iostream>

using namespace std;

int main()
{
  int row, col;
  cout << "enter number of rows : ";
  cin >> row;

  cout << "enter number of columns : ";
  cin >> col;

  int arr[row][col];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << "Enter the elemnent for index " << i << " " << j << " : ";
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}