#include <stdio.h>

int main()
{
  int num1 = 0, num2 = 0;

  printf("Enter number 1: ");
  scanf("%d", &num1);
  printf("Enter number 2: ");
  scanf("%d", &num2);

  int *num1_ptr = &num1;
  int *num2_ptr = &num2;
  printf("Multiplication of the numbers will be : %d", *num1_ptr * *num2_ptr);
}