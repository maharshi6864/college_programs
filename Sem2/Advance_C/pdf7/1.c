// Write a C program that dynamically allocates an array of integers using malloc based on user
// input for the size. Display the entered array and free the allocated memory.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *arr;
  int sizeOfArray;
  printf("Enter size of array : ");
  scanf("%d", &sizeOfArray);

  arr = (int *)malloc(sizeof(int) * sizeOfArray);

  for (int i = 0; i < sizeOfArray; i++)
  {
    printf("Enter element for index %d", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < sizeOfArray; i++)
  {
    printf("%d\n", arr[i]);
  }

  free(arr);

  return 0;
}