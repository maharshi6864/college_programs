#include <stdio.h>

int main()
{
  int arr[10] = {
      1, 22, 3, 4, 4, 5, 6, 7, 8, 10};
  int *arr_ptr = arr;
  int *max = arr_ptr;

  int len = (sizeof(arr) / sizeof(arr[0]));

  for (int i = 0; i < len; i++)
  {
    if (*max < *arr_ptr)
    {
      max = arr_ptr;
    }
    arr_ptr++;
  }

  printf("Maximum value from the array is : %d", *max);

  return 0;
}