// Question 6
//  Write a program to convert the temperature from degree Fahrenheit to centigrade

#include <stdio.h>

int main()
{
    float f, c;
    printf("Enter value of fahrenheit: ");
    scanf("%f", &f);
    c = ((float)f - 32) * (float)5 / 9;
    printf("\nValue of celsius is %.2f of fahrenheit %.2f", c, f);
}