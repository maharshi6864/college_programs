#include <stdio.h>

int main()
{
  int number;
  printf("Enter number to calculate square and cube of it : ");
  scanf("%d", &number);

  int *number_ptr = &number;

  printf("Square of the number is : %d\n", *number_ptr * *number_ptr);
  printf("Cube of the number is : %d", *number_ptr * *number_ptr * *number_ptr);
}