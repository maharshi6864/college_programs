// Write a program to multiplication and division of two numbers using
// function

#include <stdio.h>

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b, c;
    printf("Enter value of number 1 ");
    scanf("%d", &a);
    printf("Enter value of number 2 ");
    scanf("%d", &b);
    printf("Multiplication of two numbers is %d\n", mul(a, b));
    printf("Division of two numbers is %d", div(a, b));
}