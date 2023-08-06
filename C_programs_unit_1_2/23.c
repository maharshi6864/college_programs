// Question 23
//  Write a program to calculate the area and circumference of a circle.

#include <stdio.h>

int main()
{
    float radius, pie = 3.14159265359;
    printf("Enter value of radius: ");
    scanf("%f", &radius);
    float circum = 2 * pie * radius;
    printf("\nCircumference of a circle of radius %.2f is  %.2f \n", radius, circum);
}