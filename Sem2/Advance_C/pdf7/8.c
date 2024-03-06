// Write a C program to calculate the maximum of three numbers entered by the user. Take the
// input at execution time on terminal using command line argument and display the greatest
// among them on terminal.

#include <stdio.h>
#include <stdlib.h>

int main(int arc, char *arr[])
{
  // printf("%d\n", arc);
  int a = atoi(arr[1]);
  int b = atoi(arr[2]);
  int c = atoi(arr[3]);

  if (a < b)
  {
    if (b > c)
    {
      printf("Entered number 2 is the most greatest!");
    }
    else
    {
      printf("Entered number 3 is the most greatest!");
    }
  }
  else
  {
    if (a > c)
    {
      printf("Entered number 1 is the most greatest!");
    }
    else
    {
      printf("Entered number 3 is the most greatest!");
    }
  }
  return 0;
}