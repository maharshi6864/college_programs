// Write a Program to find out the greatest of two numbers using pointer.

#include <stdio.h>

int findGreatest(int *num1, int *num2)
{
  if (*num1 == *num2)
  {
    printf("Entered numbers are Equal!");
  }
  else if (*num1 < *num2)
  {
    printf("Number 1 is greater than number 2!");
  }
  else
  {
    printf("Number 2 is greater than number 1!");
  }
}

int main()
{
  int number1 = 0, number2 = 0;
  printf("Enter numbers to find the greatest !!\n");
  printf("Enter Number 1 :");
  scanf("%d", &number1);
  printf("Enter Number 2 :");
  scanf("%d", &number2);

  findGreatest(&number1, &number2);
}