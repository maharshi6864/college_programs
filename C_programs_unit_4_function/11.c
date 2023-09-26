// Write a program to find factorial of given number using function

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int a;
    printf("Cal factorial of a number  \n");
    printf("Enter number :");
    scanf("%d", &a);
    int fact = factorial(a);
    printf("Factorial of number %d is %d", a, fact);
}