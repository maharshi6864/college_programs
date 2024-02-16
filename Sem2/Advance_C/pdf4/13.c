#include <stdio.h>

int main()
{
  int size = 0;
  printf("Enter size of the array : ");
  scanf("%d", &size);
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    printf("Enter element for index %d : ", i);
    scanf("%d", &arr[i]);
  }

  int *arr_ptr = arr;
  // printf("%d\n", arr_ptr);
  arr_ptr = arr_ptr + size - 1;
  // printf("%d\n", arr_ptr);

  for (int i = size; i > 0; i--)
  {
    printf("%d\n", *arr_ptr);
    arr_ptr--;
  }
}