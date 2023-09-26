// Write a program to find cube of given number using function

#include <stdio.h>

int cube(int a)
{
    return a * a * a;
}

int main()
{
    int a;
    printf("Enter value of number to calculate cube ");
    scanf("%d", &a);
    printf("Cube of number is %d\n", cube(a));
}