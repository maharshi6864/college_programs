// Create a program to find area of triangle.

#include <stdio.h>

int main()
{
    int b, h;

    printf("Enter value of height of triangle : ");
    scanf("%d", &h);
    printf("Enter value of breath of triangle : ");
    scanf("%d", &b);
    float area = b * h / 2;
    printf("Area of triangle is : %.2f", area);
}