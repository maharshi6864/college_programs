// Question 2
//  Write a program to calculate the area and circumference of a circle.

#include <stdio.h>

int main()
{
    float radius, pie = 3.14159265359;
    printf("Enter value of radius: ");
    scanf("%f", &radius);
    float circum = 2 * pie * radius;
    printf("Circumference of circle having radius %.2f will be is  %.2f \n", radius, circum);
    float area = radius * pie * radius;
    printf("Area of circle having radius %.2f will be is  %.2f \n", radius, area);
}