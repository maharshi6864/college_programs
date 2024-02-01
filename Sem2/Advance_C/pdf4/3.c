// WAP to Calculate Average Using Pointers.

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter value for number 1 : ");
    scanf("%d", &num1);
    printf("Enter value for number 2 : ");
    scanf("%d", &num2);
    int *num1A = &num1;
    int *num2A = &num2;
    if (*num1A > *num2A)
    {
        printf("Number 1 is greater than Number 2 ");
    }
    else
    {
        printf("Number 2 is greater than Number 1 ");
    }
}