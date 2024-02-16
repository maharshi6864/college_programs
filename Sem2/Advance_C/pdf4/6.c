//  WAP to display table(3*1=3,3*2=6...) of the given number by user with function and pointers.

#include <stdio.h>

void printTable(int *number, int *divisible)
{
  for (int i = 1; i <= *divisible; i++)
  {
    printf("%d X %d = %d\n", *number, i, i * *number);
  }
}

int main()
{
  int number, divsible;
  printf("Enter number you want to print table:  ");
  scanf("%d", &number);
  printf("Enter number till you want to print table:  ");
  scanf("%d", &divsible);
  printTable(&number, &divsible);
}