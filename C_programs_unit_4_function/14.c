// Write a program to find area of circle using function

#include <stdio.h>

float areaOfCircle(float r)
{
    float area = 3.14159265359 * r * r;
    return area;
}

int main()
{
    float r;
    printf("Enter Radius of cricle to calculate the area of it: ");
    scanf("%f", &r);
    float are = areaOfCircle(r);
    printf("Area of cricle having radius %.2f is %.2f", r, are);
}