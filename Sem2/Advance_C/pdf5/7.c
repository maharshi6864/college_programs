// WAP to find largest element of Array using pointers.
#include <stdio.h>

int main()
{
  int num1, num2;
  printf("Enter value for number 1: ");
  scanf("%d", &num1);
  printf("Enter value for number 2 :");
  scanf("%d", &num2);

  int *num1_ptr = &num1;
  int *num2_ptr = &num2;

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

  return 0;
}