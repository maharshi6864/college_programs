// Write a program to calculate the area and circumference of a circle.

#include <stdio.h>

int main()
{
    float radius, pie = 3.14159265359;
    printf("Enter value of radius: ");
    scanf("%f", &radius);
    float circum = 2 * pie * radius;
    printf("\n multiply two Floating Point Numbers are >>%.2f \n", circum);
}