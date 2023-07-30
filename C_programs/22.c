// Write a program to find a volume of a cylinder

#include <stdio.h>

int main()
{
    float radius, height, pie = 3.14159265359;
    printf("Enter value of radius of cylinder: ");
    scanf("%f", &radius);
    printf("Enter value of height of cylinder: ");
    scanf("%f", &height);
    float volum = radius * pie * radius * height;
    printf("Volume of cylinder having radius %.2f and height %.2f will be >>%.2f \n", radius, height, volum);
}
