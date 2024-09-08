#include <iostream>

using namespace std;

int smallestNumberFromAnArray(int *arr, int len)
{
  int smallestNumber = *arr;
  for (int i = 0; i < len; i++)
  {
    if (smallestNumber > *arr)
    {
      smallestNumber = *arr;
    }
    arr = arr + 1;
  }
  return smallestNumber;
}

int main()
{
  int arr[10] = {1,
                 2,
                 3,
                 43,
                 4,
                 54,
                 -2,
                 56,
                 78,
                 32};
  int smallestNumber = smallestNumberFromAnArray(arr, (sizeof(arr) / sizeof(arr[0])));

  cout << "Smallest number in th array is : " << smallestNumber;
}