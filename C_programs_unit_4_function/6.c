// Write a program to swap two numbers using function

#include <stdio.h>

void swappNumber(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Value of a is %d \n", a);
    printf("Value of b is %d \n", b);
}

int main()
{
    int a, b;
    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);
    swappNumber(a, b);
}