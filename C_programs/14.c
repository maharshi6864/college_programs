// Question 14
//  Create a program to find multiplication of two numbers
#include <stdio.h>

int main()
{
    int l, b, pari;
    printf("Enter value of length of rectangle : ");
    scanf("%d", &l);
    printf("Enter value of breath of rectangle : ");
    scanf("%d", &b);
    pari = l + b;
    printf("parimeter of Rectangle is  %d", pari * 2);
    return 0;
}