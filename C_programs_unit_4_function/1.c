// Write a program to sum of three numbers using function

#include <stdio.h>

int cal(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a, b, c;
    printf("Enter value of number 1 ");
    scanf("%d", &a);
    printf("Enter value of number 2 ");
    scanf("%d", &b);
    printf("Enter value of number 3 ");
    scanf("%d", &c);
    printf("Sum of three numbers is %d", cal(a, b, c));
}