// Write a program to find square of given number using function

#include <stdio.h>

void oddOrEven(int a)
{
    if (a % 2 == 0)
    {
        printf("Entered Number is even!!");
    }
    else
    {
        printf("Entered Number is odd!!");
    }
}

int main()
{
    int a;
    printf("Enter value of number to know the number is even or odd ");
    scanf("%d", &a);
    oddOrEven(a);
}