#include <stdio.h>

void increaseTheValueOfNumber(int *number_ptr)
{
  printf("Incremented value of the numeber Entered is : %d", ++*number_ptr);
}

int main()
{
  int number = 0;
  printf("Enter number : ");
  scanf("%d", &number);
  &number;
  increaseTheValueOfNumber(&number);
  return 0;
}