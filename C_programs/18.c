//  Create a programs to find average of 5 given numbers.

#include <stdio.h>

int main()
{
    float a, b, c, d, e;
    float per, total;

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

    total = a + b + c + d + e;
    per = total / 5;

    printf("\nAverage of 5 values are %.2f", per);

    return 0;
}