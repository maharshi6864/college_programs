//  Write a Program to find the given number from user is positive or negative using pointer.

#include <stdio.h>

int findPositiveNegative(int *num)
{
  if (*num == 0)
  {
    printf("entered number is a 0!");
  }
  else if (*num < 0)
  {
    printf("entered number is a negative!");
  }
  else
  {
    printf("entered number is a positive!");
  }
}

int main()
{
  int number = 0;
  printf("Enter Number to find positive or negative :");
  scanf("%d", &number);
  findPositiveNegative(&number);
}