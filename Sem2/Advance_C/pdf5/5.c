#include <stdio.h>

int main()
{
  int number = 0;
  printf("Enter number : ");
  scanf("%d", &number);
  int *number_ptr = &number;
  printf("Decremented value of the numeber Entered is : %d", --*number_ptr);
  return 0;
}