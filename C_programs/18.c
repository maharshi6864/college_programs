// Question 18
//   Create a programs to find average of 5 given numbers.

#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    float per, total;

    printf("Enter value of a ");
    scanf("%d", &a);

    printf("Enter value of b ");
    scanf("%d", &b);

    printf("Enter value of c ");
    scanf("%d", &c);

    printf("Enter value of d ");
    scanf("%d", &d);

    printf("Enter value of e ");
    scanf("%d", &e);

    total = a + b + c + d + e;
    per = (float)total / 5;

    printf("\nAverage of 5 values are  %.2f", per);

    return 0;
}