// Question 5
//  Write a program to swap of two numbers with variables
#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;

    printf("\nValue of a >>%d \nValue of b >>%d", a, b);
}