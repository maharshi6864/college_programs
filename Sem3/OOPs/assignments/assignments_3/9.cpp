#include <iostream>

using namespace std;

int findTotalOfElementsInAnArray(int *arr, int len)
{
  int total = 0;
  for (int i = 0; i < len; i++)
  {
    total += *arr;
    arr += 1;
  }
  return total;
}

int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int len = sizeof(arr) / sizeof(arr[1]);
  int total = findTotalOfElementsInAnArray(arr, len);
  cout << "Total of element : " << total;
}