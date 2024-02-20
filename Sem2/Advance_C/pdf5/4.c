// Write a Program to find out the smallest of two numbers using pointerand function.
#include <stdio.h>

void checkTheSmallestNumber(int *num1_ptr, int *num2_ptr)
{
  if (*num1_ptr > *num2_ptr)
  {
    printf("Number 1 is greater than the number 2 !");
  }
  else if (*num1_ptr < *num2_ptr)
  {
    printf("Number 2 is greater than the number 1 !");
  }
  else
  {
    printf("Entered Number are equal !!");
  }
}

int main()
{
  int num1, num2;
  printf("Enter value for number 1: ");
  scanf("%d", &num1);
  printf("Enter value for number 2 :");
  scanf("%d", &num2);
  checkTheSmallestNumber(&num1, &num2);
}