// Write a C program that takes two integers as command line arguments and performs the
//  following operations:
// 1. Product of the two numbers.
// 2. Difference (subtract the second number from the first).

#include <stdio.h>
#include <stdlib.h>

int main(int arc, char *arr[])
{
  // printf("%d\n", arc);
  int a = atoi(arr[1]);
  int b = atoi(arr[2]);

  printf("Product of the numbers is  : %d", a * b);
  printf("Difference of the number is : %d", b - a);
  return 0;
}