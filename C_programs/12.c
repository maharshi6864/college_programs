// Create a program to find division of three numbers.
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter value of divdent: ");
    scanf("%d", &d);
    printf("Enter value of a: ");
    scanf("%d", &b);
    printf("Enter value of b: ");
    scanf("%d", &a);
    printf("Enter value of c: ");
    scanf("%d", &c);

    printf("Division of 1st numbers is %.2f\n", (float)(a / d));
    printf("Division of 2nd numbers is %.2f\n", (float)(b / d));
    printf("Division of 3rd numbers is %.2f\n", (float)(c / d));

    return 0;
}