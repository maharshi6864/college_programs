#include <iostream>

using namespace std;

int main()
{
  int arr[3][3] = {{0, 0, 3}, {1, 6, 0}, {0, 0, 2}};

  cout << "Displaying sparse matrix in Triplet Representation." << endl;
  cout << "Rows    cols  value" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (arr[i][j] != 0)
      {
        cout << i << "    " << "    " << j << "    " << arr[i][j] << endl;
      }
    }
  }

  return 0;
}