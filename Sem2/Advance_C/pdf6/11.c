// Define a structure named Circle to represent a circle with a radius. Write a C program to
//  calculate the area and perimeter of two circles and display the results.

#include <stdio.h>
#define PI 3.14159265359

struct Cricle
{
  float radius;
};

int main()
{
  struct Cricle circle1, circle2;

  printf("Enter the radius of the First circle: ");
  scanf("%f", &circle1.radius);
  printf("Enter the radius of the Second circle: ");
  scanf("%f", &circle2.radius);

  printf("\n\nArea of the First circle is %.2f, Perimeter of the First circle is %.2f\n", circle1.radius * circle1.radius * PI, 2 * PI * circle1.radius);
  printf("Area of the Second circle is %.2f, Perimeter of the Second circle is %.2f\n", circle2.radius * circle2.radius * PI, 2 * PI * circle2.radius);
}