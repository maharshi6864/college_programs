// Write a C program that takes two integers as command line arguments and performs the
//  expression given below:
// c= a3 + b2 + 3ab

#include <stdio.h>
#include <stdlib.h>

int main(int arc, char *arr[])
{
  // printf("%d\n", arc);
  int a = atoi(arr[1]);
  int b = atoi(arr[2]);

  int c = (a * a * a) + (b * b) + (3 * a * b);

  printf("answer of the expression is : %d", c);
  return 0;
}