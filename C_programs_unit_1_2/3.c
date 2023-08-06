// Question 3
//  Write a program to calculate the area of rectangle and square.

#include <stdio.h>

int main()
{
    int l, b;
    printf("Enter value of length of square : ");
    scanf("%d", &l);
    int area = l * l;
    printf("Area of Square :  %d", area);
    printf("\nEnter value of length of rectangle : ");
    scanf("%d", &l);
    printf("Enter value of breath of rectangle : ");
    scanf("%d", &b);
    area = l * b;
    printf("Area of Rectangle is : %d", area);
}