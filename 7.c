// Write a program to convert the temperature from degree centigrade to Fahrenheit.[C
//= ((F-32)*5)/9]

#include <stdio.h>

int main()
{
    float f, c;
    printf("Enter value of celsius: ");
    scanf("%f", &c);
    f = (c * 9.0 / 5.0) + 32.0;
    printf("\nValue of  Fahrenheit is %.2f of celsius %.2f", f, c);
}