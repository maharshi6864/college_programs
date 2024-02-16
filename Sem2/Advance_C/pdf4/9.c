//  WAP to take integer value from the user and create two functions( incre)
//  and (decre) which will increment and decrement the value using
// functions and pointers.

#include <stdio.h>

int increment(int *num)
{
  return *num++;
}

int main()
{
  int num = 0;
  printf("Enter number :");
  scanf("%d", &num);
  num = increment(&num);
  printf("Number %d\n", num);
}