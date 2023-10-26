// Questio-3 Write a program to enter two numbers and find the smallest out of them.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a Number :");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is Positive");
    }
}