// Write a program to find maximum of two numbers using function

#include <stdio.h>

void maxx(int a, int b)
{
    (a > b) ? printf("Value of variable a is greater than b") : printf("Value of variable b is geater than a");
}

int main()
{
    int a, b;
    printf("Cal max amoung 2 numbers \n");
    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);
    maxx(a, b);
}