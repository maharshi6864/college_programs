#include <iostream>

using namespace std;

int main()
{
  int arr[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

  cout << "Checking if the matrix is diagonal or not !!" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i != j && arr[i][j] != 0)
      {
        cout << "Matrix is not a diagonal matrix" << endl;
        return 0;
      }
    }
  }
  cout << "Matrix is a diagonal matrix" << endl;
  return 0;
}