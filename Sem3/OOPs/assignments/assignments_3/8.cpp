#include <iostream>

using namespace std;

int countNumberOfElements(int *arr, int len)
{
  int count = 0;
  for (int i = 0; i < len; i++)
  {
    count++;
  }
  return count;
}

int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int len = sizeof(arr) / sizeof(arr[1]);
  int count = countNumberOfElements(arr, len);
  cout << "number of element : " << count;
}