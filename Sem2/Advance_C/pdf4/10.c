// WAP to calculate Area of Circle using Pointer
#include <stdio.h>
#define PI 3.14159265359;

int main()
{
  float radius = 0;
  printf("Enter radius of the cricle : ");
  scanf("%f", &radius);
  float *radius_ptr = &radius;
  float area = *radius_ptr * *radius_ptr * PI;
  printf("Area Of Circle Is : %.2f", area);
}