// Write a program to check whether a number is a prime number or not using
// function

#include <stdio.h>

void primeNumber(int a)
{
    int counter = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            counter++;
        }
    }
    if (counter == 2)
    {
        printf("Entered Number is a Prime Number");
    }
    else
    {
        printf("Entered Number is not a Prime Number");
    }
}

int main()
{
    int a;
    printf("Enter Number to check either its a prime number or not :");
    scanf("%d", &a);
    primeNumber(a);
}