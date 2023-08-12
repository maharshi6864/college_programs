// Question 30
//  Write a program for the following with the help of Conditional Operator.
//  1. Find the biggest from two numbers.
//  2. Find the smallest from two numbers

#include <stdio.h>

int main()
{
    int num1, num2;
    int biggest, smallest;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Using the conditional operator to find the biggest number
    biggest = (num1 > num2) ? num1 : num2;

    // Using the conditional operator to find the smallest number
    smallest = (num1 < num2) ? num1 : num2;

    printf("The biggest number is  %d\n", biggest);
    printf("The smallest number is  %d\n", smallest);

    return 0;
}