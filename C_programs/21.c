// Question 21
//   Create a program to solve the expression x=(a+b*c)/(d+e)
#include <stdio.h>

int main()
{
    float a, b, c, d, e, x;

    printf("Enter value of a ");
    scanf("%f", &a);

    printf("Enter value of b ");
    scanf("%f", &b);

    printf("Enter value of c ");
    scanf("%f", &c);

    printf("Enter value of d ");
    scanf("%f", &d);

    printf("Enter value of e ");
    scanf("%f", &e);

    x = (a + b * c) / (d + e);

    printf("value of x will be :  %.2f", x);

    return 0;
}