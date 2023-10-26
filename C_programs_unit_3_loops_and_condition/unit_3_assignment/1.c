// Questio-1 Write a program to enter two numbers and find the smallest out of them.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);
    if (b < a)
    {
        printf("Number in a is smaller than number in b");
    }
    else
    {
        printf("Number in b is smaller than number in a");
    }
}