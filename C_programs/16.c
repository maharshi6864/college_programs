// Create a program to swap values of two variables withou varible

#include <stdio.h>

// int main()
// {
//     int a, b;
//     printf("Enter value of a: ");
//     scanf("%d", &b);
//     printf("Enter value of b: ");
//     scanf("%d", &a);
//     printf("\nValue of a >>%d \nValue of b >>%d", a, b);
// }

int main()
{
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nValue of a >>%d \nValue of b >>%d", a, b);
}