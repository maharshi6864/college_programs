// Questio-6 Write a program to find maximum of two numbers.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);
    printf("Enter value of c :");
    scanf("%d", &c);

    if (b < a)
    {
        if (c < a)
        {
            printf("a is Greater than b and c\n");
        }
        else
        {
            printf("c is greater than a and b\n");
        }
    }
    else
    {
        if (c < b)
        {
            printf("b is Greater than a and c \n");
        }
        else
        {
            printf("c is greater than a and b\n");
        }
    }

    if (b > a)
    {
        if (c > a)
        {
            printf("a is Smaller than b and c \n");
        }
        else
        {
            printf("c is Smaller than a and b\n");
        }
    }
    else
    {
        if (c > b)
        {
            printf("b is Smaller than a and c ");
        }
        else
        {
            printf("c is Smaller than a and b");
        }
    }
}