// Write a program to find minimum of two numbers using function

#include <stdio.h>

void minn(int a, int b)
{
    (a < b) ? printf("Value of variable a is Smaller than b") : printf("Value of variable b is smaller than a");
}

int main()
{
    int a, b;
    printf("Cal min amoung 2 numbers \n");
    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);
    minn(a, b);
}