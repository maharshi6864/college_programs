#include <iostream>

using namespace std;

int main()
{
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int sizeOfArrOfOuter = sizeof(arr) / sizeof(arr[0]);
  int sizeOfArrOfInner = sizeof(arr[0]) / sizeof(arr[0][0]);
  for (int i = 0; i < sizeOfArrOfOuter; i++)
  {
    for (int j = 0; j < sizeOfArrOfInner; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}