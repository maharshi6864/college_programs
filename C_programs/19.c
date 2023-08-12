// Question 19
//  Create a program to find area of rectangle.

#include <stdio.h>

int main()
{
    int l, b, area;

    printf("Enter value of length of rectangle : ");
    scanf("%d", &l);
    printf("Enter value of breath of rectangle : ");
    scanf("%d", &b);
    area = l * b;
    printf("Area of Rectangle is  %d", area);
}