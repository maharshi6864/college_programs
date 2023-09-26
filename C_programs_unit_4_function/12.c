// Write a program to find the sum of first 50 natural numbers using function

#include <stdio.h>

int sumOfNumbers(int n)
{
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        counter = counter + i;
    }

    return counter;
}

int main()
{
    int a;
    printf("find out sum of first Numbers \n");
    printf("Enter number :");
    scanf("%d", &a);
    int sum = sumOfNumbers(a);
    printf("Factorial of number %d is %d", a, sum);
}